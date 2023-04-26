#include <cstdio>

#include <Color/HSL.h>
#include <Color/RGB.h>

namespace ysImageProcessing
{
	namespace Color
	{

		HSL::HSL(RGB *t_color)
		{
			float nr = t_color->getR() / 255.0f;
			float ng = t_color->getG() / 255.0f;
			float nb = t_color->getB() / 255.0f;
			float min = std::min(std::min(nr, ng), nb);
			float max = std::max(std::max(nr, ng), nb);
			float delta = max - min;

			this->setL((min + max) / 2);

			if (delta == 0)
			{
				this->setH(0.0f);
				this->setS(0.0f);
			}
			else
			{

				if (this->getL() < 0.5f)
				{
					this->setS(delta / (max + min) * 100);
				}
				else
				{
					this->setS(delta / (1 - std::abs(2 * this->getL() - 1)) * 100);
				}

				if (nr == max)
				{
					this->setH((ng - nb) / delta);
				}
				else if (ng == max)
				{
					this->setH((nb - nr) / delta + 2);
				}
				else if (nb == max)
				{
					this->setH((nr - ng) / delta + 4);
				}

				this->setH(std::fmod(60 * this->getH() + 360, 360));
			}

			this->setL(this->getL() * 100);
		}

		HSL::HSL(const float &t_h, const float &t_s, const float &t_l) : m_h(t_h), m_s(t_s), m_l(t_l)
		{
		}

		float HSL::getH() const
		{
			return m_h;
		}

		void HSL::setH(const float &t_h)
		{
			m_h = t_h;
		}

		float HSL::getS() const
		{
			return m_s;
		}

		void HSL::setS(const float &t_s)
		{
			m_s = t_s;
		}

		float HSL::getL() const
		{
			return m_l;
		}

		void HSL::setL(const float &t_l)
		{
			m_l = t_l;
		}

		float HSL::HUE2RGB(float t_p, float t_q, float t_t)
		{
			if (t_t < 0.0f)
				t_t += 1.0f;
			if (t_t > 1.0f)
				t_t -= 1.0f;
			if (6.0f * t_t < 1.0f)
				return t_p + (t_q - t_p) * 6.0f * t_t;
			if (2.0f * t_t < 1.0f)
				return t_q;
			if (3.0f * t_t < 2.0f)
				return t_p + (t_q - t_p) * (2.0f / 3.0f - t_t) * 6.0f;
			return t_p;
		}

		RGB *HSL::toRGB()
		{
			RGB *new_rgb = new RGB();
			float nh = this->getH() / 360.0f;
			float ns = this->getS() / 100.0f;
			float nl = this->getL() / 100.0f;

			if (this->getS() == 0.0f)
			{
				new_rgb->setR(this->getL() * 255.0f);
				new_rgb->setG(this->getL() * 255.0f);
				new_rgb->setB(this->getL() * 255.0f);
			}
			else
			{
				float q = (nl < 0.5f) ? (nl * (1.0f + ns)) : (nl + ns - (ns * nl));
				float p = 2.0f * nl - q;

				new_rgb->setR(std::roundf(255.0f * HUE2RGB(p, q, nh + 1.0f / 3.0f)));
				new_rgb->setG(std::roundf(255.0f * HUE2RGB(p, q, nh)));
				new_rgb->setB(std::roundf(255.0f * HUE2RGB(p, q, nh - 1.0f / 3.0f)));
			}

			return new_rgb;
		}

		HSL::~HSL()
		{
		}

	}
}
