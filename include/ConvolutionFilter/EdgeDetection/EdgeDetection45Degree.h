#ifndef EDGEDETECTION45DEGREE_H
#define EDGEDETECTION45DEGREE_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace EdgeDetection
		{

			class EdgeDetection45Degree : public ConvolutionFilter
			{
			public:
				EdgeDetection45Degree() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~EdgeDetection45Degree();
			};

		}
	}
}

#endif /* EDGEDETECTION45DEGREE_H */
