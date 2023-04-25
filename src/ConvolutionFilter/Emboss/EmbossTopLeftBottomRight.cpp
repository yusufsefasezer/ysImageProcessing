#include "./ConvolutionFilter/Emboss/EmbossTopLeftBottomRight.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Emboss
		{

			std::string EmbossTopLeftBottomRight::filterName()
			{
				return "EmbossTopLeftBottomRight";
			}

			float EmbossTopLeftBottomRight::factor()
			{
				return 1.0f;
			}

			float EmbossTopLeftBottomRight::bias()
			{
				return 128.0f;
			}

			std::vector<std::vector<float>> EmbossTopLeftBottomRight::filterMatrix()
			{
				return {
						{
								-1,
								0,
								0,
						},
						{
								0,
								0,
								0,
						},
						{
								0,
								0,
								1,
						}};
			}

			EmbossTopLeftBottomRight::~EmbossTopLeftBottomRight()
			{
			}

		}
	}
}
