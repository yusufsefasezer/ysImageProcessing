#ifndef EMBOSS_H
#define EMBOSS_H

#include "../ConvolutionFilter.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Emboss
		{

			class Emboss : public ConvolutionFilter
			{
			public:
				Emboss() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~Emboss();
			};

		}
	}
}

#endif /* EMBOSS_H */
