#include "./ConvolutionFilter/Sharpen/Sharpen3x3Factor.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Sharpen
		{

			std::string Sharpen3x3Factor::filterName()
			{
				return "Sharpen3x3Factor";
			}

			float Sharpen3x3Factor::factor()
			{
				return 1.0f / 3.0f;
			}

			float Sharpen3x3Factor::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Sharpen3x3Factor::filterMatrix()
			{
				return {
						{
								0,
								-2,
								0,
						},
						{
								-2,
								11,
								-2,
						},
						{
								0,
								-2,
								0,
						}};
			}

			Sharpen3x3Factor::~Sharpen3x3Factor()
			{
			}

		}
	}
}
