#ifndef VERTICALEDGEDETECTION_H
#define VERTICALEDGEDETECTION_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace EdgeDetection
		{

			class VerticalEdgeDetection : public ConvolutionFilter
			{
			public:
				VerticalEdgeDetection() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~VerticalEdgeDetection();
			};

		}
	}
}

#endif /* VERTICALEDGEDETECTION_H */
