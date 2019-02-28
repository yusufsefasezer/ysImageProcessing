#include "./ConvolutionFilter/Blur/Blur5x5.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Blur {

			std::string Blur5x5::filterName() {
				return "Blur5x5";
			}

			float Blur5x5::factor() {
				return 1.0f / 13.0f;
			}

			float Blur5x5::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > Blur5x5::filterMatrix() {
				return {
					{ 0, 0, 1, 0, 0,},
					{ 0, 1, 1, 1, 0,},
					{ 1, 1, 1, 1, 1,},
					{ 0, 1, 1, 1, 0,},
					{ 0, 0, 1, 0, 0,}};
			}

			Blur5x5::~Blur5x5() {
			}

		}
	}
}