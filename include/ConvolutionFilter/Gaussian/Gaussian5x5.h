#ifndef GAUSSIAN5X5_H
#define GAUSSIAN5X5_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Gaussian
		{

			class Gaussian5x5 : public ConvolutionFilter
			{
			public:
				Gaussian5x5() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Gaussian5x5();
			};

		}
	}
}

#endif /* GAUSSIAN5X5_H */
