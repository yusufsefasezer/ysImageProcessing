#include "ConvolutionFilter/Kirsch/Kirsch3x3Horizontal.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Kirsch {

			std::string Kirsch3x3Horizontal::filterName() {
				return "Kirsch3x3Horizontal";
			}

			float Kirsch3x3Horizontal::factor() {
				return 1.0f;
			}

			float Kirsch3x3Horizontal::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > Kirsch3x3Horizontal::filterMatrix() {
				return {
					{ 5, 5, 5,},
					{ -3, 0, -3,},
					{ -3, -3, -3,}};
			}

			Kirsch3x3Horizontal::~Kirsch3x3Horizontal() {
			}

		}
	}
}