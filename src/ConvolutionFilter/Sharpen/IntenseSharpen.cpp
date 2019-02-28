#include "ConvolutionFilter/Sharpen/IntenseSharpen.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Sharpen {

			std::string IntenseSharpen::filterName() {
				return "IntenseSharpen";
			}

			float IntenseSharpen::factor() {
				return 1.0f;
			}

			float IntenseSharpen::bias() {
				return 0.0f;
			}

			std::vector<std::vector<float> > IntenseSharpen::filterMatrix() {
				return {
					{ 1, 1, 1,},
					{ 1, -7, 1,},
					{ 1, 1, 1,}};
			}

			IntenseSharpen::~IntenseSharpen() {
			}

		}
	}
}