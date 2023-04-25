#ifndef MEAN5X5_H
#define MEAN5X5_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Mean
		{

			class Mean5x5 : public ConvolutionFilter
			{
			public:
				Mean5x5() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Mean5x5();
			};

		}
	}
}

#endif /* MEAN5X5_H */
