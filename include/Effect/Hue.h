#ifndef HUE_H
#define HUE_H

#include "Effect.h"

namespace ysImageProcessing
{
	namespace Effect
	{

		class Hue : public Effect
		{
		protected:
			bool m_colorize = true;
			float m_angle = 0.0f;

		public:
			Hue() = default;
			Hue(ysImage *t_image);

			bool isColorize() const;
			void setColorize(const bool &t_colorize);

			float getAngle() const;
			void setAngle(const float &t_angle);

			void filter(const int &t_x, const int &t_y, Color::RGB *t_color) override;

			virtual ~Hue();
		};

	}
}

#endif /* HUE_H */
