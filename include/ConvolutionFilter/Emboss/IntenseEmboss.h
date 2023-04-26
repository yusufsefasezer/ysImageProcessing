#ifndef INTENSEEMBOSS_H
#define INTENSEEMBOSS_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Emboss
		{

			class IntenseEmboss : public ConvolutionFilter
			{
			public:
				IntenseEmboss() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~IntenseEmboss();
			};

		}
	}
}

#endif /* INTENSEEMBOSS_H */
