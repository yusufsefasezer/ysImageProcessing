#include "ConvolutionFilter/Prewitt/Prewitt3x3Horizontal.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Prewitt
		{

			std::string Prewitt3x3Horizontal::filterName()
			{
				return "Blur3x3Filter";
			}

			float Prewitt3x3Horizontal::factor()
			{
				return 1.0f;
			}

			float Prewitt3x3Horizontal::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Prewitt3x3Horizontal::filterMatrix()
			{
				return {
						{
								-1,
								0,
								1,
						},
						{
								-1,
								0,
								1,
						},
						{
								-1,
								0,
								1,
						}};
			}

			Prewitt3x3Horizontal::~Prewitt3x3Horizontal()
			{
			}

		}
	}
}
