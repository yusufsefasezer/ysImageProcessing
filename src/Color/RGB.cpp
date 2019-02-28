#include <cstdio>

#include "Color/RGB.h"

namespace ysImageProcessing {
	namespace Color {

		RGB::RGB(RGB* t_color) {
			this->setR(t_color->getR());
			this->setG(t_color->getG());
			this->setB(t_color->getB());
		}

		RGB::RGB(const int& t_r, const int& t_g, const int& t_b) :
		m_r(t_r), m_g(t_g), m_b(t_b) {
		}

		int RGB::getR() const {
			return m_r;
		}

		void RGB::setR(const int& t_r) {
			this->m_r = t_r;
		}

		int RGB::getG() const {
			return m_g;
		}

		void RGB::setG(const int& t_g) {
			this->m_g = t_g;
		}

		int RGB::getB() const {
			return m_b;
		}

		void RGB::setB(const int& t_b) {
			this->m_b = t_b;
		}

		int RGB::clampValue(const int& t_value) {
			return clampValue(t_value, 0, 255);
		}

		int RGB::clampValue(const int& t_value, const int& t_min, const int& t_max) {
			if (t_value < t_min) {
				return t_min;
			} else if (t_value > t_max) {
				return t_max;
			}
			return t_value;
		}

		RGB* RGB::toRGB() {
			RGB *new_rgb = new RGB();
			new_rgb->setR(this->getR());
			new_rgb->setG(this->getG());
			new_rgb->setB(this->getB());
			return new_rgb;
		}

		RGB* RGB::colorTemperature(const float& t_value) {
			RGB* new_rgb = new RGB();

			float nvalue = t_value / 100;
			float r, g, b;

			if (nvalue <= 66) {
				r = 255;
				g = std::min(std::max(99.4708025861 * std::log(nvalue) - 161.1195681661, 0.0), 255.0);
			} else {
				r = std::min(std::max(329.698727446 * std::pow(nvalue - 60.0, -0.1332047592), 0.0), 255.0);
				g = std::min(std::max(288.1221695283 * std::pow(nvalue - 60.0, -0.0755148492), 0.0), 255.0);
			}

			if (nvalue >= 66) {
				b = 255;
			} else if (nvalue <= 19) {
				b = 0;
			} else {
				b = nvalue - 10;
				b = std::min(std::max(138.5177312231 * std::log(b) - 305.0447927307, 0.0), 255.0);
			}

			new_rgb->setR(r);
			new_rgb->setG(g);
			new_rgb->setB(b);

			return new_rgb;
		}

		RGB::~RGB() {
		}

	}
}