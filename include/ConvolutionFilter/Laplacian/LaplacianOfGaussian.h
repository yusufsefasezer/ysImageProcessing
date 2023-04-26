#ifndef LAPLACIANOFGAUSSIAN_H
#define LAPLACIANOFGAUSSIAN_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Laplacian
		{

			class LaplacianOfGaussian : public ConvolutionFilter
			{
			public:
				LaplacianOfGaussian() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~LaplacianOfGaussian();
			};

		}
	}
}

#endif /* LAPLACIANOFGAUSSIAN_H */
