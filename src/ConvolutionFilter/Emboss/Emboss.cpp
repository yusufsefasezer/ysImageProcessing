#include "./ConvolutionFilter/Emboss/Emboss.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Emboss {

			std::string Emboss::filterName() {
				return "Emboss";
			}

			float Emboss::factor() {
				return 1.0f;
			}

			float Emboss::bias() {
				return 128.0f;
			}

			std::vector<std::vector<float>> Emboss::filterMatrix() {
				return {
					{ 2, 0, 0,},
					{ 0, -1, 0,},
					{ 0, 0, -1,}};
			}

			Emboss::~Emboss() {
			}

		}
	}
}
