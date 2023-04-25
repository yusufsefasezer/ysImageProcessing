#ifndef MEAN7X7_H
#define MEAN7X7_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Mean
		{

			class Mean7x7 : public ConvolutionFilter
			{
			public:
				Mean7x7() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Mean7x7();
			};

		}
	}
}

#endif /* MEAN7X7_H */
