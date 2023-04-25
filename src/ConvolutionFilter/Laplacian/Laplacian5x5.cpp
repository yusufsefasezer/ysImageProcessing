#include "./ConvolutionFilter/Laplacian/Laplacian5x5.h"

namespace ysImageProcessing
{
	namespace ConvolutionFilter
	{
		namespace Laplacian
		{

			std::string Laplacian5x5::filterName()
			{
				return "Laplacian5x5";
			}

			float Laplacian5x5::factor()
			{
				return 1.0f;
			}

			float Laplacian5x5::bias()
			{
				return 0.0f;
			}

			std::vector<std::vector<float>> Laplacian5x5::filterMatrix()
			{
				return {
						{
								-1,
								-1,
								-1,
								-1,
								-1,
						},
						{
								-1,
								-1,
								-1,
								-1,
								-1,
						},
						{
								-1,
								-1,
								24,
								-1,
								-1,
						},
						{
								-1,
								-1,
								-1,
								-1,
								-1,
						},
						{-1, -1, -1, -1, -1}};
			}

			Laplacian5x5::~Laplacian5x5()
			{
			}

		}
	}
}
