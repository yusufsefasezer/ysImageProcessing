#ifndef RGBA_H
#define RGBA_H

#include "RGB.h"

namespace ysImageProcessing {
	namespace Color {

		class RGBA : public RGB {
		protected:
			int m_a = 1;

		public:
			RGBA() = default;
			RGBA(RGB* t_color);
			RGBA(const int &t_r, const int &t_g, const int &t_b, const int &t_a);

			// Alpha
			int getA() const;
			void setA(const int &t_a);

			// toRGB
			RGB* toRGB() override;

			virtual ~RGBA();
		};

	}
}

#endif /* RGBA_H */