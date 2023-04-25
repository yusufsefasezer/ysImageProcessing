#ifndef MEAN3X3_H
#define MEAN3X3_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Mean
		{

			class Mean3x3 : public ConvolutionFilter
			{
			public:
				Mean3x3() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Mean3x3();
			};
		}
	}
}

#endif /* MEAN3X3_H */
