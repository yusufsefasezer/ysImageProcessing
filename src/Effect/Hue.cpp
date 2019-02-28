#include "Effect/Hue.h"
#include "Color/HSL.h"

namespace ysImageProcessing {
	namespace Effect {

		Hue::Hue(ysImage* t_image) : Effect(t_image) {
		}

		bool Hue::isColorize() const {
			return m_colorize;
		}

		void Hue::setColorize(const bool& t_colorize) {
			this->m_colorize = t_colorize;
		}

		float Hue::getAngle() const {
			return m_angle;
		}

		void Hue::setAngle(const float& t_angle) {
			m_angle = t_angle;
		}

		void Hue::filter(const int& t_x, const int& t_y, Color::RGB* t_color) {
			Color::HSL* hsl_color = new Color::HSL(t_color);

			if (isColorize()) {
				hsl_color->setH(getAngle());
			} else {
				hsl_color->setH(hsl_color->getH() + getAngle());
			}

			delete t_color;
			t_color = hsl_color->toRGB();
			delete hsl_color;
		}

		Hue::~Hue() {
		}

	}
}