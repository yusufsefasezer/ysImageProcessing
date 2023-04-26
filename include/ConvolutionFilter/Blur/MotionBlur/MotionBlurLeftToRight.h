#ifndef MOTIONBLURLEFTTORIGHT_H
#define MOTIONBLURLEFTTORIGHT_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Motion
		{

			class MotionBlurLeftToRight : public ConvolutionFilter
			{
			public:
				MotionBlurLeftToRight() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~MotionBlurLeftToRight();
			};

		}
	}
}

#endif /* MOTIONBLURLEFTTORIGHT_H */
