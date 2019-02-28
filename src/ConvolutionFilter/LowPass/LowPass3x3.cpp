#include "./ConvolutionFilter/LowPass/LowPass3x3.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace LowPass {

			std::string LowPass3x3::filterName() {
				return "LowPass3x3";
			}

			float LowPass3x3::factor() {
				return 1.0f / 16.0f;
			}

			float LowPass3x3::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > LowPass3x3::filterMatrix() {
				return {
					{ 1, 2, 1,},
					{ 2, 4, 2,},
					{ 1, 2, 1,}};
			}

			LowPass3x3::~LowPass3x3() {
			}

		}
	}
}