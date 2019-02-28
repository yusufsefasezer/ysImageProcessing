#ifndef COLOR_H
#define COLOR_H

namespace ysImageProcessing {
	namespace Color {

		class RGB;

		class Color {
		public:
			Color() = default;
			virtual RGB* toRGB() = 0;
		};

	}
}

#endif /* COLOR_H */