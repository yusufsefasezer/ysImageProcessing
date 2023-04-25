#include "ConvolutionFilter/Blur/MotionBlur/MotionBlurLeftToRight.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Motion
		{

			std::string MotionBlurLeftToRight::filterName()
			{
				return "MotionBlurLeftToRight";
			}

			float MotionBlurLeftToRight::factor()
			{
				return 1.0f / 9.0f;
			}

			float MotionBlurLeftToRight::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> MotionBlurLeftToRight::filterMatrix()
			{
				return {
						{
								1,
								0,
								0,
								0,
								0,
								0,
								0,
								0,
								0,
						},
						{
								0,
								1,
								0,
								0,
								0,
								0,
								0,
								0,
								0,
						},
						{
								0,
								0,
								1,
								0,
								0,
								0,
								0,
								0,
								0,
						},
						{
								0,
								0,
								0,
								1,
								0,
								0,
								0,
								0,
								0,
						},
						{
								0,
								0,
								0,
								0,
								1,
								0,
								0,
								0,
								0,
						},
						{
								0,
								0,
								0,
								0,
								0,
								1,
								0,
								0,
								0,
						},
						{
								0,
								0,
								0,
								0,
								0,
								0,
								1,
								0,
								0,
						},
						{
								0,
								0,
								0,
								0,
								0,
								0,
								0,
								1,
								0,
						},
						{
								0,
								0,
								0,
								0,
								0,
								0,
								0,
								0,
								1,
						}};
			}

			MotionBlurLeftToRight::~MotionBlurLeftToRight()
			{
			}

		}
	}
}
