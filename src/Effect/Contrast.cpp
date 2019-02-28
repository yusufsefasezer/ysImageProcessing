#include "Effect/Contrast.h"

namespace ysImageProcessing {
	namespace Effect {

		Contrast::Contrast(ysImage* t_image) : Effect(t_image) {
		}

		float Contrast::getLevel() const {
			return m_level;
		}

		void Contrast::setLevel(const float& t_level) {
			this->m_level = t_level;
		}

		void Contrast::filter(const int& t_x, const int& t_y, Color::RGB* t_color) {
			float level = pow((getLevel() + 100) / 100, 2);

			t_color->setR(t_color->clampValue(((t_color->getR() / 255.0f - 0.5f) * level + 0.5f) * 255));
			t_color->setG(t_color->clampValue(((t_color->getG() / 255.0f - 0.5f) * level + 0.5f) * 255));
			t_color->setG(t_color->clampValue(((t_color->getB() / 255.0f - 0.5f) * level + 0.5f) * 255));
		}

		Contrast::~Contrast() {
		}

	}
}