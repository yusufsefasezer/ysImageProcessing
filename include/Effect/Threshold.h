#ifndef THRESHOLD_H
#define THRESHOLD_H

#include <Effect.h>

namespace ysImageProcessing
{
	namespace Effect
	{

		class Threshold : public Effect
		{
		protected:
			float m_amount = 127.0f;

		public:
			Threshold() = default;
			Threshold(ysImage *t_image);

			float getAmount() const;
			void setAmount(const float &t_amount);

			void filter(const int &t_x, const int &t_y, Color::RGB *t_color) override;

			virtual ~Threshold();
		};

	}
}

#endif /* THRESHOLD_H */
