#ifndef EMBOSSTOPLEFTBOTTOMRIGHT_H
#define EMBOSSTOPLEFTBOTTOMRIGHT_H

#include <ConvolutionFilter.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Emboss
		{

			class EmbossTopLeftBottomRight : public ConvolutionFilter
			{
			public:
				EmbossTopLeftBottomRight() = default;
				std::string filterName() override;
				float factor() override;
				float bias() override;
				std::vector<std::vector<float>> filterMatrix() override;
				virtual ~EmbossTopLeftBottomRight();
			};

		}
	}
}

#endif /* EMBOSSTOPLEFTBOTTOMRIGHT_H */
