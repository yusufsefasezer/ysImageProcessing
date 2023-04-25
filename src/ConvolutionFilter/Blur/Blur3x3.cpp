#include "./ConvolutionFilter/Blur/Blur3x3.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Blur
		{

			std::string Blur3x3::filterName()
			{
				return "Blur3x3";
			}

			float Blur3x3::factor()
			{
				return 1.0f;
			}

			float Blur3x3::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Blur3x3::filterMatrix()
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

			Blur3x3::~Blur3x3()
			{
			}

		}
	}
}
