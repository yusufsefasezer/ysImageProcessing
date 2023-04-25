#include "./ConvolutionFilter/Mean/Mean9x9.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Mean
		{

			std::string Mean9x9::filterName()
			{
				return "Mean9x9";
			}

			float Mean9x9::factor()
			{
				return 1.0f / 81.0f;
			}

			float Mean9x9::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Mean9x9::filterMatrix()
			{
				return {
						{1, 1, 1, 1, 1, 1, 1, 1, 1},
						{1, 1, 1, 1, 1, 1, 1, 1, 1},
						{1, 1, 1, 1, 1, 1, 1, 1, 1},
						{1, 1, 1, 1, 1, 1, 1, 1, 1},
						{1, 1, 1, 1, 1, 1, 1, 1, 1},
						{1, 1, 1, 1, 1, 1, 1, 1, 1},
						{1, 1, 1, 1, 1, 1, 1, 1, 1},
						{1, 1, 1, 1, 1, 1, 1, 1, 1},
						{1, 1, 1, 1, 1, 1, 1, 1, 1}};
			}

			Mean9x9::~Mean9x9()
			{
			}

		}
	}
}
