#include "./ConvolutionFilter/Prewitt/Prewitt3x3Vertical.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Prewitt {

			std::string Prewitt3x3Vertical::filterName() {
				return "Prewitt3x3Vertical";
			}

			float Prewitt3x3Vertical::factor() {
				return 1.0f;
			}

			float Prewitt3x3Vertical::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float>> Prewitt3x3Vertical::filterMatrix() {
				return {
					{ 1, 1, 1,},
					{ 0, 0, 0,},
					{ -1, -1, -1,}};
			}

			Prewitt3x3Vertical::~Prewitt3x3Vertical() {
			}

		}
	}
}
