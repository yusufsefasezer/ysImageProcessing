#include "./ConvolutionFilter/Mean/Mean5x5.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Mean {

			std::string Mean5x5::filterName() {
				return "Mean5x5";
			}

			float Mean5x5::factor() {
				return 1.0f / 25.0f;
			}

			float Mean5x5::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > Mean5x5::filterMatrix() {
				return {
					{ 1, 1, 1, 1, 1,},
					{ 1, 1, 1, 1, 1,},
					{ 1, 1, 1, 1, 1,},
					{ 1, 1, 1, 1, 1,},
					{ 1, 1, 1, 1, 1,}};
			}

			Mean5x5::~Mean5x5() {
			}

		}
	}
}