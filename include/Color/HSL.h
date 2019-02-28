#ifndef HSL_H
#define HSL_H

#include "Color.h"
#include <algorithm>
#include <cmath>

namespace ysImageProcessing {
	namespace Color {

		class HSL : public Color {
		protected:
			float m_h = 0.0f;
			float m_s = 0.0f;
			float m_l = 0.0f;
			float HUE2RGB(float t_p, float t_q, float t_t);

		public:
			HSL() = default;
			HSL(RGB *t_color);
			HSL(const float& t_h, const float& t_s, const float& t_l);

			// Hue
			float getH() const;
			void setH(const float& t_h);

			// Saturation
			float getL() const;
			void setL(const float& t_l);

			// Lightness
			float getS() const;
			void setS(const float& t_s);

			// toRGB
			RGB* toRGB() override;

			virtual ~HSL();
		};

	}
}

#endif /* HSL_H */