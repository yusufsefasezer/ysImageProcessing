#ifndef GAMMA_H
#define GAMMA_H

#include "Effect.h"

namespace ysImageProcessing
{
	namespace Effect
	{

		class Gamma : public Effect
		{
		protected:
			float m_gamma = 1.0f;

		public:
			Gamma() = default;
			Gamma(ysImage *t_image);

			float getGamma() const;
			void setGamma(const float &t_gamma);

			void filter(const int &t_x, const int &t_y, Color::RGB *t_color) override;

			virtual ~Gamma();
		};

	}
}

#endif /* GAMMA_H */
