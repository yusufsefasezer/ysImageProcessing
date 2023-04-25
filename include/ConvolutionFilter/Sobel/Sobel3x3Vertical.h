#ifndef SOBEL3X3VERTICAL_H
#define SOBEL3X3VERTICAL_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Sobel
		{

			class Sobel3x3Vertical : public ConvolutionFilter
			{
			public:
				Sobel3x3Vertical() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Sobel3x3Vertical();
			};

		}
	}
}

#endif /* SOBEL3X3VERTICAL_H */
