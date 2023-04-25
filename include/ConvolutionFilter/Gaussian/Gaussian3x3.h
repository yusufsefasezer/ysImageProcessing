#ifndef GAUSSIAN3X3_H
#define GAUSSIAN3X3_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Gaussian
		{

			class Gaussian3x3 : public ConvolutionFilter
			{
			public:
				Gaussian3x3() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Gaussian3x3();
			};

		}
	}
}

#endif /* GAUSSIAN3X3_H */
