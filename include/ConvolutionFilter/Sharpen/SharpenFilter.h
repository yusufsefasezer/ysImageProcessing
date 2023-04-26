#ifndef SHARPENFILTER_H
#define SHARPENFILTER_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Sharpen
		{

			class SharpenFilter : public ConvolutionFilter
			{
			public:
				SharpenFilter() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~SharpenFilter();
			};

		}
	}
}

#endif /* SHARPENFILTER_H */
