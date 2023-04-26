#ifndef SHARPEN3X3_H
#define SHARPEN3X3_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Sharpen
		{

			class Sharpen3x3 : public ConvolutionFilter
			{
			public:
				Sharpen3x3() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Sharpen3x3();
			};

		}
	}
}

#endif /* SHARPEN3X3_H */
