#include <Color/RGBA.h>

namespace ysImageProcessing
{
	namespace Color
	{

		RGBA::RGBA(RGB *t_color)
		{
			this->setR(t_color->getR());
			this->setG(t_color->getG());
			this->setB(t_color->getB());
			this->setA(1);
		}

		RGBA::RGBA(const int &t_r, const int &t_g, const int &t_b, const int &t_a) : RGB(t_r, t_g, t_b), m_a(t_a)
		{
		}

		int RGBA::getA() const
		{
			return m_a;
		}

		void RGBA::setA(const int &t_a)
		{
			m_a = t_a;
		}

		RGB *RGBA::toRGB()
		{
			RGB *new_rgb = new RGB();
			new_rgb->setR((1 - this->getA()) * new_rgb->getR() + this->getA() * this->getR());
			new_rgb->setG((1 - this->getA()) * new_rgb->getG() + this->getA() * this->getG());
			new_rgb->setB((1 - this->getA()) * new_rgb->getB() + this->getA() * this->getB());
			return new_rgb;
		}

		RGBA::~RGBA()
		{
		}

	}

}
