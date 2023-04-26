#ifndef LAPLACIAN3X3_H
#define LAPLACIAN3X3_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Laplacian
		{

			class Laplacian3x3 : public ConvolutionFilter
			{
			public:
				Laplacian3x3() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Laplacian3x3();
			};

		}
	}
}

#endif /* LAPLACIAN3X3_H */
