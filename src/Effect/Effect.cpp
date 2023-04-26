#include <Effect/Effect.h>

namespace ysImageProcessing
{
	namespace Effect
	{

		Effect::Effect(ysImage *t_image)
		{
			setImage(t_image);
		}

		ysImage *Effect::getImage() const
		{
			return m_image;
		}

		void Effect::setImage(ysImage *t_image)
		{
			this->m_image = t_image;
		}

		void Effect::apply()
		{

			if (m_image == nullptr)
			{
				throw std::runtime_error("Image not found.");
			}

			Color::RGB *rgb_color;
			int r, g, b;
			r = g = b = 0;

			for (int x = 0; x < m_image->getWidth(); x++)
			{
				for (int y = 0; y < m_image->getHeight(); y++)
				{

					rgb_color = m_image->getColor(x, y);
					filter(x, y, rgb_color);
					m_image->setColor(x, y, rgb_color);
				}
			}
		}

		Effect::~Effect()
		{
		}

	}
}
