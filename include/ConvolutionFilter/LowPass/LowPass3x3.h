#ifndef LOWPASS3X3_H
#define LOWPASS3X3_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace LowPass
		{

			class LowPass3x3 : public ConvolutionFilter
			{
			public:
				LowPass3x3() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~LowPass3x3();
			};

		}
	}
}

#endif /* LOWPASS3X3_H */
