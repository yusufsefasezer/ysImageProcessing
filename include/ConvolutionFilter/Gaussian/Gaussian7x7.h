#ifndef GAUSSIAN7X7_H
#define GAUSSIAN7X7_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Gaussian
		{

			class Gaussian7x7 : public ConvolutionFilter
			{
			public:
				Gaussian7x7() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Gaussian7x7();
			};

		}
	}
}

#endif /* GAUSSIAN7X7_H */
