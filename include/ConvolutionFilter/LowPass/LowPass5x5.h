#ifndef LOWPASS5X5_H
#define LOWPASS5X5_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace LowPass
		{

			class LowPass5x5 : public ConvolutionFilter
			{
			public:
				LowPass5x5() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~LowPass5x5();
			};

		}
	}
}

#endif /* LOWPASS5X5_H */
