#ifndef BLUR3X3_H
#define BLUR3X3_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Blur
		{

			class Blur3x3 : public ConvolutionFilter
			{
			public:
				Blur3x3() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Blur3x3();
			};

		}
	}
}

#endif /* BLUR3X3_H */
