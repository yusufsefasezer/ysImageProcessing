#include "Effect/Invert.h"

namespace ysImageProcessing {
	namespace Effect {

		Invert::Invert(ysImage* t_image) : Effect(t_image) {
		}

		float Invert::getAmount() const {
			return m_amount;
		}

		void Invert::setAmount(const float& t_amount) {
			this->m_amount = t_amount;
		}

		void Invert::filter(const int& t_x, const int& t_y, Color::RGB* t_color) {
			int nr, ng, nb;
			nr = ng = nb = 0;

			nr = (255 - t_color->getR()) * getAmount() + t_color->getR() * (1 - getAmount());
			ng = (255 - t_color->getG()) * getAmount() + t_color->getG() * (1 - getAmount());
			nb = (255 - t_color->getB()) * getAmount() + t_color->getB() * (1 - getAmount());

			t_color->setR(t_color->clampValue(nr));
			t_color->setG(t_color->clampValue(ng));
			t_color->setB(t_color->clampValue(nb));
		}

		Invert::~Invert() {
		}

	}
}
