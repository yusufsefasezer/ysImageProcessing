#include <Effect/Threshold.h>

namespace ysImageProcessing
{
	namespace Effect
	{

		Threshold::Threshold(ysImage *t_image) : Effect(t_image)
		{
		}

		float Threshold::getAmount() const
		{
			return m_amount;
		}

		void Threshold::setAmount(const float &t_amount)
		{
			this->m_amount = t_amount;
		}

		void Threshold::filter(const int &t_x, const int &t_y, Color::RGB *t_color)
		{
			float luminance = 0.2126 * t_color->getR() + 0.7152 * t_color->getG() + 0.0722 * t_color->getB();

			t_color->setR(luminance > getAmount() ? 255 : 0);
			t_color->setG(luminance > getAmount() ? 255 : 0);
			t_color->setB(luminance > getAmount() ? 255 : 0);
		}

		Threshold::~Threshold()
		{
		}

	}
}
