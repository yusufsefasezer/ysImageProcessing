#ifndef MOTIONBLURRIGHTTOLEFT_H
#define MOTIONBLURRIGHTTOLEFT_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Motion
		{

			class MotionBlurRightToLeft : public ConvolutionFilter
			{
			public:
				MotionBlurRightToLeft() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~MotionBlurRightToLeft();
			};

		}
	}
}

#endif /* MOTIONBLURRIGHTTOLEFT_H */
