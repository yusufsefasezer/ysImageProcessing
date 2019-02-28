#ifndef INVERT_H
#define INVERT_H

#include "Effect.h"

namespace ysImageProcessing {
	namespace Effect {

		class Invert : public Effect {
		protected:
			float m_amount = 1.0f;

		public:
			Invert() = default;
			Invert(ysImage *t_image);

			float getAmount() const;
			void setAmount(const float& t_amount);

			void filter(const int& t_x, const int& t_y, Color::RGB* t_color) override;

			virtual ~Invert();
		};

	}
}

#endif /* INVERT_H */