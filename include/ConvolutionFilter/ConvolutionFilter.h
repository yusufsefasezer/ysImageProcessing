#ifndef CONVOLUTIONFILTER_H
#define CONVOLUTIONFILTER_H

#include <string>
#include <vector>

using namespace std;

namespace ysImageProcessing {
	namespace ConvolutionFilter {

		class ConvolutionFilter {
		public:
			ConvolutionFilter() = default;
			virtual std::string filterName() = 0;
			virtual float factor() = 0;
			virtual float bias() = 0;
			virtual std::vector<std::vector<float>> filterMatrix() = 0;
			//virtual ~Filter();
		};

	}
}
#endif /* CONVOLUTIONFILTER_H */