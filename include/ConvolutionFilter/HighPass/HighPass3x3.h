#ifndef HIGHPASS3X3_H
#define HIGHPASS3X3_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace HighPass
		{

			class HighPass3x3 : public ConvolutionFilter
			{
			public:
				HighPass3x3() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~HighPass3x3();
			};

		}
	}
}

#endif /* HIGHPASS3X3_H */
