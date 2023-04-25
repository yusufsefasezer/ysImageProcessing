#include "./ConvolutionFilter/EdgeDetection/EdgeDetection45Degree.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace EdgeDetection
		{

			std::string EdgeDetection45Degree::filterName()
			{
				return "EdgeDetection45Degree";
			}

			float EdgeDetection45Degree::factor()
			{
				return 1.0f;
			}

			float EdgeDetection45Degree::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> EdgeDetection45Degree::filterMatrix()
			{
				return {
						{
								-1,
								0,
								0,
								0,
								0,
						},
						{
								0,
								-2,
								0,
								0,
								0,
						},
						{
								0,
								0,
								6,
								0,
								0,
						},
						{
								0,
								0,
								0,
								-2,
								0,
						},
						{
								0,
								0,
								0,
								0,
								-1,
						}};
			}

			EdgeDetection45Degree::~EdgeDetection45Degree()
			{
			}

		}
	}
}
