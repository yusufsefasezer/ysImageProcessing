#include "ConvolutionFilter/Emboss/IntenseEmboss.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Emboss {

			std::string IntenseEmboss::filterName() {
				return "IntenseEmboss";
			}

			float IntenseEmboss::factor() {
				return 1.0f;
			}

			float IntenseEmboss::bias() {
				return 128.0f;
			}

			std::vector<std::vector<float> > IntenseEmboss::filterMatrix() {
				return {
					{ -1, -1, -1, -1, 0,},
					{ -1, -1, -1, 0, 1,},
					{ -1, -1, 0, 1, 1,},
					{ -1, 0, 1, 1, 1,},
					{ 0, 1, 1, 1, 1,}};
			}

			IntenseEmboss::~IntenseEmboss() {
			}

		}
	}
}