#include "./ConvolutionFilter/Gaussian/Gaussian3x3.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Gaussian
		{

			std::string Gaussian3x3::filterName()
			{
				return "Gaussian3x3";
			}

			float Gaussian3x3::factor()
			{
				return 1.0f / 16.0f;
			}

			float Gaussian3x3::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Gaussian3x3::filterMatrix()
			{
				return {
						{
								1,
								2,
								1,
						},
						{
								2,
								4,
								2,
						},
						{
								1,
								2,
								1,
						}};
			}

			Gaussian3x3::~Gaussian3x3()
			{
			}

		}
	}
}
