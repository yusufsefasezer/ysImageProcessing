#ifndef SHARPEN3X3FACTOR_H
#define SHARPEN3X3FACTOR_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Sharpen {

			class Sharpen3x3Factor : public ConvolutionFilter {
			public:
				Sharpen3x3Factor() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float> > filterMatrix() override;
				virtual ~Sharpen3x3Factor();
			};

		}
	}
}
#endif /* SHARPEN3X3FACTOR_H */