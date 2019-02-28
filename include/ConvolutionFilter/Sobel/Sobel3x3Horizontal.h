#ifndef SOBEL3X3HORIZONTAL_H
#define SOBEL3X3HORIZONTAL_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Sobel {

			class Sobel3x3Horizontal : public ConvolutionFilter {
			public:
				Sobel3x3Horizontal() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float> > filterMatrix() override;
				virtual ~Sobel3x3Horizontal();
			};

		}
	}
}

#endif /* SOBEL3X3HORIZONTAL_H */