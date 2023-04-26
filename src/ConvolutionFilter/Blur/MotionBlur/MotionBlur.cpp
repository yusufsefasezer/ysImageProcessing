#include <ConvolutionFilter/Blur/MotionBlur/MotionBlur.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Motion
		{

			std::string MotionBlur::filterName()
			{
				return "MotionBlur";
			}

			float MotionBlur::factor()
			{
				return 1.0f / 18.0f;
			}

			float MotionBlur::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> MotionBlur::filterMatrix()
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
								1,
						},
						{
								0,
								1,
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
								1,
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
								1,
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
								1,
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
								1,
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
								1,
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
								1,
						}};
			}

			MotionBlur::~MotionBlur()
			{
			}

		}
	}
}
