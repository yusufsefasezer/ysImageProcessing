#ifndef KIRSCH3X3HORIZONTAL_H
#define KIRSCH3X3HORIZONTAL_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Kirsch
		{

			class Kirsch3x3Horizontal : public ConvolutionFilter
			{
			public:
				Kirsch3x3Horizontal() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Kirsch3x3Horizontal();
			};

		}
	}
}

#endif /* KIRSCH3X3HORIZONTAL_H */
