#ifndef MEAN9X9_H
#define MEAN9X9_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Mean
		{

			class Mean9x9 : public ConvolutionFilter
			{
			public:
				Mean9x9() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Mean9x9();
			};

		}
	}
}

#endif /* MEAN9X9_H */
