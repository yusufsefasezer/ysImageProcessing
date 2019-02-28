#include "Effect/Vibrance.h"

namespace ysImageProcessing {
	namespace Effect {

		Vibrance::Vibrance(ysImage* t_image) : Effect(t_image) {
		}

		float Vibrance::getLevel() const {
			return m_level;
		}

		void Vibrance::setLevel(const float& t_level) {
			this->m_level = t_level;
		}

		void Vibrance::filter(const int& t_x, const int& t_y, Color::RGB* t_color) {
			setLevel(getLevel() * -1);

			float max = std::max(std::max(t_color->getR(), t_color->getG()), t_color->getB());
			float avg = (t_color->getR() + t_color->getG() + t_color->getB()) / 3;
			float amt = ((std::abs(max - avg) * 2 / 255) * getLevel()) / 100;

			if (t_color->getR() != max) {
				t_color->setR(t_color->getR() + ((max - t_color->getR()) * amt));
			}
			if (t_color->getG() != max) {
				t_color->setG(t_color->getG() + ((max - t_color->getG()) * amt));
			}
			if (t_color->getB() != max) {
				t_color->setB(t_color->getB() + ((max - t_color->getB()) * amt));
			}

		}

		Vibrance::~Vibrance() {
		}

	}
}