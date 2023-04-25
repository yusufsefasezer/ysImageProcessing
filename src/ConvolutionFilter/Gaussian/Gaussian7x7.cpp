#include "./ConvolutionFilter/Gaussian/Gaussian7x7.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Gaussian
		{

			std::string Gaussian7x7::filterName()
			{
				return "Gaussian7x7";
			}

			float Gaussian7x7::factor()
			{
				return 1.0f / 136.0f;
			}

			float Gaussian7x7::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Gaussian7x7::filterMatrix()
			{
				return {
						{
								0.0,
								0.2,
								0.0,
						},
						{
								0.2,
								0.2,
								0.2,
						},
						{
								0.0,
								0.2,
								0.2,
						}};
			}

			Gaussian7x7::~Gaussian7x7()
			{
			}

		}
	}
}
