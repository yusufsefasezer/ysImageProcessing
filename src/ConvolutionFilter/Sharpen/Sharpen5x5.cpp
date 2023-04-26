#include <./ConvolutionFilter/Sharpen/Sharpen5x5.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Sharpen
		{

			std::string Sharpen5x5::filterName()
			{
				return "Sharpen5x5";
			}

			float Sharpen5x5::factor()
			{
				return 1.0f / 8.0f;
			}

			float Sharpen5x5::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Sharpen5x5::filterMatrix()
			{
				return {
						{
								-1,
								-1,
								-1,
								-1,
								-1,
						},
						{
								-1,
								2,
								2,
								2,
								-1,
						},
						{
								-1,
								2,
								8,
								2,
								1,
						},
						{
								-1,
								2,
								2,
								2,
								-1,
						},
						{
								-1,
								-1,
								-1,
								-1,
								-1,
						}};
			}

			Sharpen5x5::~Sharpen5x5()
			{
			}

		}
	}
}
