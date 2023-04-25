#ifndef IMAGEARITHMETIC_H
#define IMAGEARITHMETIC_H

#include "ysImage.h"

namespace ysImageProcessing
{
	namespace Arithmetic
	{

		class ImageArithmetic
		{
		private:
			ysImage *m_image;

		public:
			ImageArithmetic() = default;
			ImageArithmetic(ysImage *t_image);

			ysImage *getImage() const;
			void setImage(ysImage *t_image);

			virtual void apply(ysImage *t_image) = 0;
			virtual ~ImageArithmetic();
		};

	}
}

#endif /* IMAGEARITHMETIC_H */
