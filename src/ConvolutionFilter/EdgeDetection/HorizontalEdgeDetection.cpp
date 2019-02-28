#include "./ConvolutionFilter/EdgeDetection/HorizontalEdgeDetection.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace EdgeDetection {

			std::string HorizontalEdgeDetection::filterName() {
				return "HorizontalEdgeDetection";
			}

			float HorizontalEdgeDetection::factor() {
				return 1.0f;
			}

			float HorizontalEdgeDetection::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > HorizontalEdgeDetection::filterMatrix() {
				return {
					{ 0, 0, 0, 0, 0,},
					{ 0, 0, 0, 0, 0,},
					{ -1, -1, 2, 0, 0,},
					{ 0, 0, 0, 0, 0,},
					{ 0, 0, 0, 0, 0,}};
			}

			HorizontalEdgeDetection::~HorizontalEdgeDetection() {
			}

		}
	}
}