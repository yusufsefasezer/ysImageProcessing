#include "./ConvolutionFilter/EdgeDetection/EdgeDetectionTopLeftBottomRight.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace EdgeDetection
		{

			std::string EdgeDetectionTopLeftBottomRight::filterName()
			{
				return "EdgeDetectionTopLeftBottomRight";
			}

			float EdgeDetectionTopLeftBottomRight::factor()
			{
				return 1.0f;
			}

			float EdgeDetectionTopLeftBottomRight::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> EdgeDetectionTopLeftBottomRight::filterMatrix()
			{
				return {
						{
								-5,
								0,
								0,
						},
						{
								0,
								0,
								0,
						},
						{
								0,
								0,
								5,
						}};
			}

			EdgeDetectionTopLeftBottomRight::~EdgeDetectionTopLeftBottomRight()
			{
			}

		}
	}
}
