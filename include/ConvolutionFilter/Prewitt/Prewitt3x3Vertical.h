#ifndef PREWITT3X3VERTICAL_H
#define PREWITT3X3VERTICAL_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Prewitt
		{

			class Prewitt3x3Vertical : public ConvolutionFilter
			{
			public:
				Prewitt3x3Vertical() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Prewitt3x3Vertical();
			};

		}
	}
}

#endif /* PREWITT3X3VERTICAL_H */
