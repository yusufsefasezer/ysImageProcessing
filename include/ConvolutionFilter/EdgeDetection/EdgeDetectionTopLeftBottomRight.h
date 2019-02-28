#ifndef EDGEDETECTIONTOPLEFTBOTTOMRIGHT_H
#define EDGEDETECTIONTOPLEFTBOTTOMRIGHT_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace EdgeDetection {

			class EdgeDetectionTopLeftBottomRight : public ConvolutionFilter {
			public:
				EdgeDetectionTopLeftBottomRight() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float> > filterMatrix() override;
				virtual ~EdgeDetectionTopLeftBottomRight();
			};

		}
	}
}

#endif /* EDGEDETECTIONTOPLEFTBOTTOMRIGHT_H */