#ifndef YSIMAGE_H
#define YSIMAGE_H

#include <string>
#include <stdexcept>
#include <gd.h>

#include <Color/RGB.h>

namespace ysImageProcessing
{

	class ysImage
	{
	private:
		std::string m_path;
		FILE *m_fpin, *m_fpout;
		gdImagePtr m_image;
		void loadFile();

	public:
		ysImage() = delete;
		ysImage(const std::string &t_path);

		std::string getPath() const;
		void setPath(const std::string &t_path);

		gdImagePtr getImage() const;
		void setImage(const gdImagePtr &t_image);

		// Size
		int getWidth() const;
		int getHeight() const;

		// Red
		int getRed(const int &t_x, const int &t_y);
		void setRed(const int &t_x, const int &t_y, const int &t_value);

		// Green
		int getGreen(const int &t_x, const int &t_y);
		void setGreen(const int &t_x, const int &t_y, const int &t_value);

		// Blue
		int getBlue(const int &t_x, const int &t_y);
		void setBlue(const int &t_x, const int &t_y, const int &t_value);

		// Alpha
		int getAlpa(const int &t_x, const int &t_y);
		void setAlpa(const int &t_x, const int &t_y, const int &t_value);

		// RGB
		int getRGB(const int &t_x, const int &t_y);
		void setRGB(const int &t_x, const int &t_y, const int &t_r, const int &t_g, const int &t_b);

		// Color
		Color::RGB *getColor(const int &t_x, const int &t_y);
		void setColor(const int &t_x, const int &t_y, Color::RGB *t_color);

		// Save
		void save();
		void saveAsBMP(const std::string &t_name);
		void saveAsGIF(const std::string &t_name);
		void saveAsJPEG(const std::string &t_name);
		void saveAsJPEG(const std::string &t_name, const int &t_quality);
		void saveAsPNG(const std::string &t_name);
		void saveAsTIFF(const std::string &t_name);
		void saveAsWEBP(const std::string &t_name);
		void saveAsWEBP(const std::string &t_name, const int &t_quality);

		virtual ~ysImage();
	};

}

#endif /* YSIMAGE_H */
