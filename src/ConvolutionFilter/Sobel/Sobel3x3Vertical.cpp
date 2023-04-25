#include "./ConvolutionFilter/Sobel/Sobel3x3Vertical.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Sobel
		{

			std::string Sobel3x3Vertical::filterName()
			{
				return "Sobel3x3Vertical";
			}

			float Sobel3x3Vertical::factor()
			{
				return 1.0f;
			}

			float Sobel3x3Vertical::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Sobel3x3Vertical::filterMatrix()
			{
				return {
						{
								1,
								2,
								1,
						},
						{
								0,
								0,
								0,
						},
						{
								-1,
								-2,
								-1,
						}};
			}

			Sobel3x3Vertical::~Sobel3x3Vertical()
			{
			}

		}
	}
}
