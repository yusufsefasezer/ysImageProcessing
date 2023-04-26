#ifndef PREWITT3X3HORIZONTAL_H
#define PREWITT3X3HORIZONTAL_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Prewitt
		{

			class Prewitt3x3Horizontal : public ConvolutionFilter
			{
			public:
				Prewitt3x3Horizontal() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Prewitt3x3Horizontal();
			};

		}
	}
}

#endif /* PREWITT3X3HORIZONTAL_H */
