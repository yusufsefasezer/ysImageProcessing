#include "./ConvolutionFilter/Sharpen/SharpenFilter.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Sharpen {

			std::string SharpenFilter::filterName() {
				return "SharpenFilter";
			}

			float SharpenFilter::factor() {
				return 1.0f;
			}

			float SharpenFilter::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > SharpenFilter::filterMatrix() {
				return {
					{ -1, -1, -1,},
					{ -1, 9, -1,},
					{ -1, -1, -1,}};
			}

			SharpenFilter::~SharpenFilter() {
			}

		}
	}
}