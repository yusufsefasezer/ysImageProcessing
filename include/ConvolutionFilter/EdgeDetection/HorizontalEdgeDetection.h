#ifndef HORIZONTALEDGEDETECTION_H
#define HORIZONTALEDGEDETECTION_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace EdgeDetection
		{

			class HorizontalEdgeDetection : public ConvolutionFilter
			{
			public:
				HorizontalEdgeDetection() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~HorizontalEdgeDetection();
			};

		}
	}
}

#endif /* HORIZONTALEDGEDETECTION_H */
