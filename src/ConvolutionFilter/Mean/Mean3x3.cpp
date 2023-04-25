#include "./ConvolutionFilter/Mean/Mean3x3.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Mean
		{

			std::string Mean3x3::filterName()
			{
				return "Mean3x3";
			}

			float Mean3x3::factor()
			{
				return 1.0f / 9.0f;
			}

			float Mean3x3::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Mean3x3::filterMatrix()
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

			Mean3x3::~Mean3x3()
			{
			}

		}
	}
}
