#ifndef SHARPEN5X5_H
#define SHARPEN5X5_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Sharpen {

			class Sharpen5x5 : public ConvolutionFilter {
			public:
				Sharpen5x5() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float> > filterMatrix() override;
				virtual ~Sharpen5x5();
			};

		}
	}
}
#endif /* SHARPEN5X5_H */