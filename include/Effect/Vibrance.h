#ifndef VIBRANCE_H
#define VIBRANCE_H

#include "Effect.h"
#include <algorithm>

namespace ysImageProcessing
{
	namespace Effect
	{

		class Vibrance : public Effect
		{
		protected:
			float m_level = 0.0f;

		public:
			Vibrance() = default;
			Vibrance(ysImage *t_image);

			float getLevel() const;
			void setLevel(const float &t_level);

			void filter(const int &t_x, const int &t_y, Color::RGB *t_color) override;

			virtual ~Vibrance();
		};

	}
}

#endif /* VIBRANCE_H */
