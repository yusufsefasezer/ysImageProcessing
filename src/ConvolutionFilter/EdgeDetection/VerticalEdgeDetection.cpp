#include <./ConvolutionFilter/EdgeDetection/VerticalEdgeDetection.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace EdgeDetection
		{

			std::string VerticalEdgeDetection::filterName()
			{
				return "VerticalEdgeDetection";
			}

			float VerticalEdgeDetection::factor()
			{
				return 1.0f;
			}

			float VerticalEdgeDetection::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> VerticalEdgeDetection::filterMatrix()
			{
				return {
						{
								0,
								0,
								-1,
								0,
								0,
						},
						{
								0,
								0,
								-1,
								0,
								0,
						},
						{
								0,
								0,
								4,
								0,
								0,
						},
						{
								0,
								0,
								-1,
								0,
								0,
						},
						{
								0,
								0,
								-1,
								0,
								0,
						}};
			}

			VerticalEdgeDetection::~VerticalEdgeDetection()
			{
			}

		}
	}
}
