#ifndef GREYSCALE_H
#define GREYSCALE_H

#include <Effect.h>

namespace ysImageProcessing
{
	namespace Effect
	{

		class Greyscale : public Effect
		{
		protected:
			float m_amount = 0.5f;

		public:
			Greyscale() = default;
			Greyscale(ysImage *t_image);

			float getAmount() const;
			void setAmount(const float &t_amount);

			void filter(const int &t_x, const int &t_y, Color::RGB *t_color) override;

			virtual ~Greyscale();
		};

	}
}

#endif /* GREYSCALE_H */
