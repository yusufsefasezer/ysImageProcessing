#include "ConvolutionFilter/HighPass/HighPass3x3.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace HighPass {

			std::string HighPass3x3::filterName() {
				return "HighPass3x3";
			}

			float HighPass3x3::factor() {
				return 1.0f / 16.0f;
			}

			float HighPass3x3::bias() {
				return 128.0f;
			}

			std::vector<std::vector<float> > HighPass3x3::filterMatrix() {
				return {
					{ -1, -2, -1,},
					{ -2, 12, -2,},
					{ -1, -2, -1,}};
			}

			HighPass3x3::~HighPass3x3() {
			}

		}
	}
}