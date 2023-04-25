#ifndef MOTIONBLUR_H
#define MOTIONBLUR_H

#include "../../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Motion
		{

			class MotionBlur : public ConvolutionFilter
			{
			public:
				MotionBlur() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~MotionBlur();
			};

		}
	}
}

#endif /* MOTIONBLUR_H */
