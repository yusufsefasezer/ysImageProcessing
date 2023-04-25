#ifndef BLUR5X5_H
#define BLUR5X5_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Blur
		{

			class Blur5x5 : public ConvolutionFilter
			{
			public:
				Blur5x5() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Blur5x5();
			};

		}
	}
}

#endif /* BLUR5X5_H */
