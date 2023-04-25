#include "Effect/Sepia.h"

namespace ysImageProcessing
{
	namespace Effect
	{

		Sepia::Sepia(ysImage *t_image) : Effect(t_image)
		{
		}

		float Sepia::getAmount() const
		{
			return m_amount;
		}

		void Sepia::setAmount(const float &t_amount)
		{
			this->m_amount = t_amount;
		}

		void Sepia::filter(const int &t_x, const int &t_y, Color::RGB *t_color)
		{
			t_color->setR(((t_color->getR() * 0.393) + (t_color->getG() * 0.769) + (t_color->getB() * 0.189)) * getAmount() + t_color->getR() * (1 - getAmount()));
			t_color->setG(((t_color->getR() * 0.349) + (t_color->getG() * 0.686) + (t_color->getB() * 0.168)) * getAmount() + t_color->getG() * (1 - getAmount()));
			t_color->setB(((t_color->getR() * 0.272) + (t_color->getG() * 0.534) + (t_color->getB() * 0.131)) * getAmount() + t_color->getB() * (1 - getAmount()));
		}

		Sepia::~Sepia()
		{
		}

	}
}
