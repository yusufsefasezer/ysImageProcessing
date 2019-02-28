#include "./ConvolutionFilter/Sobel/Sobel3x3Horizontal.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Sobel {

			std::string Sobel3x3Horizontal::filterName() {
				return "Sobel3x3Horizontal";
			}

			float Sobel3x3Horizontal::factor() {
				return 1.0f;
			}

			float Sobel3x3Horizontal::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > Sobel3x3Horizontal::filterMatrix() {
				return {
					{ -1, 0, 1,},
					{ -2, 0, 2,},
					{ -1, 0, 1,}};
			}

			Sobel3x3Horizontal::~Sobel3x3Horizontal() {
			}

		}
	}
}