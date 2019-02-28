#include "./ConvolutionFilter/Emboss/Emboss45Degree.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Emboss {

			std::string Emboss45Degree::filterName() {
				return "Emboss45Degree";
			}

			float Emboss45Degree::factor() {
				return 1.0f;
			}

			float Emboss45Degree::bias() {
				return 128.0f;
			}

			std::vector<std::vector<float> > Emboss45Degree::filterMatrix() {
				return {
					{ -1, -1, 0,},
					{ -1, 0, 1,},
					{ 0, 1, 1,}};
			}

			Emboss45Degree::~Emboss45Degree() {
			}

		}
	}
}