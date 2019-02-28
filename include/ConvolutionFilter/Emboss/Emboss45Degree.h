#ifndef EMBOSS45DEGREE_H
#define EMBOSS45DEGREE_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {
		namespace Emboss {

			class Emboss45Degree : public ConvolutionFilter {
			public:
				Emboss45Degree() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float> > filterMatrix() override;
				virtual ~Emboss45Degree();
			};

		}
	}
}
#endif /* EMBOSS45DEGREE_H */