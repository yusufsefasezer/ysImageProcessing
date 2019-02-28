#include "Effect/Gamma.h"

namespace ysImageProcessing {
	namespace Effect {

		Gamma::Gamma(ysImage* t_image) : Effect(t_image) {
		}

		float Gamma::getGamma() const {
			return m_gamma;
		}

		void Gamma::setGamma(const float& t_gamma) {
			this->m_gamma = t_gamma;
		}

		void Gamma::filter(const int& t_x, const int& t_y, Color::RGB* t_color) {
			t_color->setR(t_color->clampValue(t_color->getR() * getGamma() * getGamma()));
			t_color->setG(t_color->clampValue(t_color->getG() * getGamma() * getGamma()));
			t_color->setB(t_color->clampValue(t_color->getB() * getGamma() * getGamma()));
		}

		Gamma::~Gamma() {
		}

	}
}