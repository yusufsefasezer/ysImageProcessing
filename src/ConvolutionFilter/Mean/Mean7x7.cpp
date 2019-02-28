#include "./ConvolutionFilter/Mean/Mean7x7.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Mean {

			std::string Mean7x7::filterName() {
				return "Mean7x7";
			}

			float Mean7x7::factor() {
				return 1.0f / 49.0f;
			}

			float Mean7x7::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > Mean7x7::filterMatrix() {
				return {
					{ 1, 1, 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1, 1, 1},
					{ 1, 1, 1, 1, 1, 1, 1}};
			}

			Mean7x7::~Mean7x7() {
			}

		}
	}
}