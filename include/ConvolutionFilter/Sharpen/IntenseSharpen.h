#ifndef INTENSESHARPEN_H
#define INTENSESHARPEN_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Sharpen
		{

			class IntenseSharpen : public ConvolutionFilter
			{
			public:
				IntenseSharpen() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~IntenseSharpen();
			};

		}
	}
}

#endif /* INTENSESHARPEN_H */
