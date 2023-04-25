#ifndef SEPIA_H
#define SEPIA_H

#include "Effect.h"

namespace ysImageProcessing
{
	namespace Effect
	{

		class Sepia : public Effect
		{
		protected:
			float m_amount = 1.0f;

		public:
			Sepia() = default;
			Sepia(ysImage *t_image);

			float getAmount() const;
			void setAmount(const float &t_amount);

			void filter(const int &t_x, const int &t_y, Color::RGB *t_color) override;

			virtual ~Sepia();
		};

	}
}

#endif /* SEPIA_H */
