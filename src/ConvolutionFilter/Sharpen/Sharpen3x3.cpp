#include <./ConvolutionFilter/Sharpen/Sharpen3x3.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Sharpen
		{

			std::string Sharpen3x3::filterName()
			{
				return "Sharpen3x3";
			}

			float Sharpen3x3::factor()
			{
				return 1.0f;
			}

			float Sharpen3x3::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Sharpen3x3::filterMatrix()
			{
				return {
						{
								0,
								-1,
								0,
						},
						{
								-1,
								5,
								-1,
						},
						{
								0,
								-1,
								0,
						}};
			}

			Sharpen3x3::~Sharpen3x3()
			{
			}

		}
	}
}
