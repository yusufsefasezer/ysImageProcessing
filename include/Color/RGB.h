#ifndef RGB_H
#define RGB_H

#include "Color.h"
#include <cmath>
#include <algorithm>

namespace ysImageProcessing
{
	namespace Color
	{

		class RGB : public Color
		{
		protected:
			int m_r = 0;
			int m_g = 0;
			int m_b = 0;

		public:
			RGB() = default;
			RGB(RGB *t_color);
			RGB(const int &t_r, const int &t_g, const int &t_b);

			// Red
			int getR() const;
			void setR(const int &t_r);

			// Green
			int getG() const;
			void setG(const int &t_g);

			// Blue
			int getB() const;
			void setB(const int &t_b);

			// Clamp
			int clampValue(const int &t_value);
			int clampValue(const int &t_value, const int &t_min, const int &t_max);

			// toRGB
			RGB *toRGB() override;

			// Color Temperature
			static RGB *colorTemperature(const float &t_value);

			virtual ~RGB();
		};

	}
}

#endif /* RGB_H */
