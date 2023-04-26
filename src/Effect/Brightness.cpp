#include <Effect/Brightness.h>

namespace ysImageProcessing
{
	namespace Effect
	{

		Brightness::Brightness(ysImage *t_image) : Effect(t_image)
		{
		}

		float Brightness::getAmount() const
		{
			return m_amount;
		}

		void Brightness::setAmount(const float &t_amount)
		{
			this->m_amount = t_amount;
		}

		void Brightness::filter(const int &t_x, const int &t_y, Color::RGB *t_color)
		{
			t_color->setR(t_color->clampValue(t_color->getR() * getAmount()));
			t_color->setG(t_color->clampValue(t_color->getG() * getAmount()));
			t_color->setB(t_color->clampValue(t_color->getB() * getAmount()));
		}

		Brightness::~Brightness()
		{
		}

	}
}
