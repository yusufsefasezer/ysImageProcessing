#ifndef BRIGHTNESS_H
#define BRIGHTNESS_H

#include "Effect.h"

namespace ysImageProcessing
{
	namespace Effect
	{

		class Brightness : public Effect
		{
		protected:
			float m_amount = 1.0f;

		public:
			Brightness() = default;
			Brightness(ysImage *t_image);

			float getAmount() const;
			void setAmount(const float &t_amount);

			void filter(const int &t_x, const int &t_y, Color::RGB *t_color) override;

			virtual ~Brightness();
		};

	}
}

#endif /* BRIGHTNESS_H */
