#include <./ConvolutionFilter/Gaussian/Gaussian5x5.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Gaussian
		{

			std::string Gaussian5x5::filterName()
			{
				return "Gaussian5x5";
			}

			float Gaussian5x5::factor()
			{
				return 1.0f / 159.0f;
			}

			float Gaussian5x5::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Gaussian5x5::filterMatrix()
			{
				return {
						{2, 4, 5, 4, 2},
						{4, 9, 12, 9, 4},
						{5, 12, 15, 12, 5},
						{4, 9, 12, 9, 4},
						{2, 4, 5, 4, 2}};
			}

			Gaussian5x5::~Gaussian5x5()
			{
			}

		}
	}
}
