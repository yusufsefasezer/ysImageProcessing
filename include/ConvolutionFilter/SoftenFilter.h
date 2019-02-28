#ifndef SOFTENFILTER_H
#define SOFTENFILTER_H

#include "ConvolutionFilter.h"

namespace ysImageProcessing {
	namespace ConvolutionFilter {

		class SoftenFilter : public ConvolutionFilter {
		public:
			SoftenFilter() = default;
			std::string filterName() override;
			float factor() override;
			float bias() override;
			std::vector<std::vector<float> > filterMatrix() override;
			virtual ~SoftenFilter();
		};

	}
}

#endif /* SOFTENFILTER_H */