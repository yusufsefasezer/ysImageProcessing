#include <ConvolutionFilter/Blur/MotionBlur/MotionBlurRightToLeft.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Motion
		{

			std::string MotionBlurRightToLeft::filterName()
			{
				return "MotionBlurRightToLeft";
			}

			float MotionBlurRightToLeft::factor()
			{
				return 1.0f / 9.0f;
			}

			float MotionBlurRightToLeft::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> MotionBlurRightToLeft::filterMatrix()
			{
				return {
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
								1,
								0,
								0,
								0,
								0,
								0,
								0,
								0,
								0,
						}};
			}

			MotionBlurRightToLeft::~MotionBlurRightToLeft()
			{
			}

		}
	}
}
