#include "Arithmetic/ImageArithmetic.h"

namespace ysImageProcessing
{
	namespace Arithmetic
	{

		ImageArithmetic::ImageArithmetic(ysImage *t_image)
		{
			setImage(t_image);
		}

		ysImage *ImageArithmetic::getImage() const
		{
			return m_image;
		}

		void ImageArithmetic::setImage(ysImage *t_image)
		{
			this->m_image = t_image;
		}

		ImageArithmetic::~ImageArithmetic()
		{
		}
	}
}
