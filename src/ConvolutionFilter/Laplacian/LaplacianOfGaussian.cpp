#include <./ConvolutionFilter/Laplacian/LaplacianOfGaussian.h>

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Laplacian
		{

			std::string LaplacianOfGaussian::filterName()
			{
				return "LaplacianOfGaussian";
			}

			float LaplacianOfGaussian::factor()
			{
				return 1.0f;
			}

			float LaplacianOfGaussian::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> LaplacianOfGaussian::filterMatrix()
			{
				return {
						{0, 0, -1, 0, 0},
						{0, -1, -2, -1, 0},
						{-1, -2, 16, -2, -1},
						{0, -1, -2, -1, 0},
						{0, 0, -1, 0, 0}};
			}

			LaplacianOfGaussian::~LaplacianOfGaussian()
			{
			}

		}
	}
}
