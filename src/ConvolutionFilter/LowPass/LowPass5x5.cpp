#include <./ConvolutionFilter/LowPass/LowPass5x5.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace LowPass
		{

			std::string LowPass5x5::filterName()
			{
				return "LowPass5x5";
			}

			float LowPass5x5::factor()
			{
				return 1.0f / 60.0f;
			}

			float LowPass5x5::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> LowPass5x5::filterMatrix()
			{
				return {
						{
								1,
								1,
								1,
								1,
								1,
						},
						{
								1,
								4,
								4,
								4,
								1,
						},
						{
								1,
								4,
								12,
								4,
								1,
						},
						{
								1,
								4,
								4,
								4,
								1,
						},
						{
								1,
								1,
								1,
								1,
								1,
						}};
			}

			LowPass5x5::~LowPass5x5()
			{
			}

		}
	}
}
