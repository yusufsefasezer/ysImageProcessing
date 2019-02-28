#ifndef LAPLACIAN5X5_H
#define LAPLACIAN5X5_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Laplacian {

			class Laplacian5x5 : public ConvolutionFilter {
			public:
				Laplacian5x5() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float> > filterMatrix() override;
				virtual ~Laplacian5x5();
			};

		}
	}
}
#endif /* LAPLACIAN5X5_H */