#include "./ConvolutionFilter/SoftenFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{

		std::string SoftenFilter::filterName()
		{
			return "SoftenFilter";
		}

		float SoftenFilter::factor()
		{
			return 1.0f / 8.0f;
		}

		float SoftenFilter::bias()
		{
			return 0.0f;
		}

		std::vector<std::vector<float>> SoftenFilter::filterMatrix()
		{
			return {
					{
							1,
							1,
							1,
					},
					{
							1,
							1,
							1,
					},
					{
							1,
							1,
							1,
					}};
		}

		SoftenFilter::~SoftenFilter()
		{
		}

	}
}
