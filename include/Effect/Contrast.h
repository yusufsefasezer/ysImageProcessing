#ifndef CONTRAST_H
#define CONTRAST_H

#include <cmath>
#include "Effect.h"

namespace ysImageProcessing
{
	namespace Effect
	{

		class Contrast : public Effect
		{
		protected:
			float m_level = 1.0f;

		public:
			Contrast() = default;
			Contrast(ysImage *t_image);

			float getLevel() const;
			void setLevel(const float &t_level);

			void filter(const int &t_x, const int &t_y, Color::RGB *t_color) override;

			virtual ~Contrast();
		};

	}
}

#endif /* CONTRAST_H */
