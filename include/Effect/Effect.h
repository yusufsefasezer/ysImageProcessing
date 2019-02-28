#ifndef EFFECT_H
#define EFFECT_H

#include "ysImage.h"
#include "Color/RGBA.h"

namespace ysImageProcessing {
	namespace Effect {

		class Effect {
		protected:
			ysImage *m_image;
		public:
			Effect() = default;
			Effect(ysImage *t_image);

			ysImage* getImage() const;
			void setImage(ysImage* t_image);

			void apply();

			virtual void filter(const int& t_x, const int& t_y, Color::RGB* t_color) = 0;

			virtual ~Effect();
		};

	}
}

#endif /* EFFECT_H */