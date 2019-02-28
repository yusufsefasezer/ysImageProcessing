#include "./ConvolutionFilter/Laplacian/Laplacian3x3.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Laplacian {

			std::string Laplacian3x3::filterName() {
				return "Laplacian3x3";
			}

			float Laplacian3x3::factor() {
				return 1.0f;
			}

			float Laplacian3x3::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > Laplacian3x3::filterMatrix() {
				return {
					{ -1, -1, -1,},
					{ -1, 8, -1,},
					{ -1, -1, -1,}};
			}

			Laplacian3x3::~Laplacian3x3() {
			}

		}
	}
} 