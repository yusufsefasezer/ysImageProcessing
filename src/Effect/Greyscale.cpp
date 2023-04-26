#include <Effect/Greyscale.h>

namespace ysImageProcessing
{
	namespace Effect
	{

		Greyscale::Greyscale(ysImage *t_image) : Effect(t_image)
		{
		}

		float Greyscale::getAmount() const
		{
			return m_amount;
		}

		void Greyscale::setAmount(const float &t_amount)
		{
			this->m_amount = t_amount;
		}

		void Greyscale::filter(const int &t_x, const int &t_y, Color::RGB *t_color)
		{
			float luminance = 0.2126 * t_color->getR() + 0.7152 * t_color->getG() + 0.0722 * t_color->getB();

			t_color->setR(luminance * getAmount() + t_color->getR() * (1 - getAmount()));
			t_color->setG(luminance * getAmount() + t_color->getG() * (1 - getAmount()));
			t_color->setB(luminance * getAmount() + t_color->getB() * (1 - getAmount()));
		}

		Greyscale::~Greyscale()
		{
		}

	}
}
