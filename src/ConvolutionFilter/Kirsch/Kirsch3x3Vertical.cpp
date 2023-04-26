#include <ConvolutionFilter/Kirsch/Kirsch3x3Vertical.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Kirsch
		{

			std::string Kirsch3x3Vertical::filterName()
			{
				return "Kirsch3x3Vertical";
			}

			float Kirsch3x3Vertical::factor()
			{
				return 1.0f;
			}

			float Kirsch3x3Vertical::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Kirsch3x3Vertical::filterMatrix()
			{
				return {
						{
								5,
								-3,
								-3,
						},
						{
								5,
								0,
								-3,
						},
						{
								5,
								-3,
								-3,
						}};
			}

			Kirsch3x3Vertical::~Kirsch3x3Vertical()
			{
			}

		}
	}
}
