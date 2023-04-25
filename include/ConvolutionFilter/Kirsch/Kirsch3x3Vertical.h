#ifndef KIRSCH3X3VERTICAL_H
#define KIRSCH3X3VERTICAL_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Kirsch
		{

			class Kirsch3x3Vertical : public ConvolutionFilter
			{
			public:
				Kirsch3x3Vertical() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Kirsch3x3Vertical();
			};

		}
	}
}

#endif /* KIRSCH3X3VERTICAL_H */
