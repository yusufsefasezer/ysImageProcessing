#include <ysImage.h>

namespace ysImageProcessing
{

	void ysImage::loadFile()
	{
		m_fpin = fopen(getPath().c_str(), "rb");

		if (m_fpin == nullptr)
		{
			throw std::runtime_error("File not found.");
		}
		else
		{
			m_image = gdImageCreateFromFile(getPath().c_str());
			fclose(m_fpin);
		}
	}

	ysImage::ysImage(const std::string &t_path)
	{
		setPath(t_path);
	}

	std::string ysImage::getPath() const
	{
		return m_path;
	}

	void ysImage::setPath(const std::string &t_path)
	{
		this->m_path = t_path;
		loadFile();
	}

	gdImagePtr ysImage::getImage() const
	{
		return m_image;
	}

	void ysImage::setImage(const gdImagePtr &t_image)
	{
		this->m_image = t_image;
	}

	int ysImage::getWidth() const
	{
		return m_image->sx;
	}

	int ysImage::getHeight() const
	{
		return m_image->sy;
	}

	int ysImage::getRed(const int &t_x, const int &t_y)
	{
		return gdImageRed(m_image, gdImageGetPixel(m_image, t_x, t_y));
	}

	void ysImage::setRed(const int &t_x, const int &t_y, const int &t_value)
	{
		gdImageSetPixel(m_image, t_x, t_y, gdImageColorAllocateAlpha(m_image, t_value, getGreen(t_x, t_y), getBlue(t_x, t_y), getAlpa(t_x, t_y)));
	}

	int ysImage::getGreen(const int &t_x, const int &t_y)
	{
		return gdImageGreen(m_image, gdImageGetPixel(m_image, t_x, t_y));
	}

	void ysImage::setGreen(const int &t_x, const int &t_y, const int &t_value)
	{
		gdImageSetPixel(m_image, t_x, t_y, gdImageColorAllocateAlpha(m_image, getRed(t_x, t_y), t_value, getBlue(t_x, t_y), getAlpa(t_x, t_y)));
	}

	int ysImage::getBlue(const int &t_x, const int &t_y)
	{
		return gdImageBlue(m_image, gdImageGetPixel(m_image, t_x, t_y));
	}

	void ysImage::setBlue(const int &t_x, const int &t_y, const int &t_value)
	{
		gdImageSetPixel(m_image, t_x, t_y, gdImageColorAllocateAlpha(m_image, getRed(t_x, t_y), getGreen(t_x, t_y), t_value, getAlpa(t_x, t_y)));
	}

	int ysImage::getAlpa(const int &t_x, const int &t_y)
	{
		return gdImageAlpha(m_image, gdImageGetPixel(m_image, t_x, t_y));
	}

	void ysImage::setAlpa(const int &t_x, const int &t_y, const int &t_value)
	{
		gdImageSetPixel(m_image, t_x, t_y, gdImageColorAllocateAlpha(m_image, getRed(t_x, t_y), getGreen(t_x, t_y), getBlue(t_x, t_y), t_value));
	}

	int ysImage::getRGB(const int &t_x, const int &t_y)
	{
		return gdImageGetPixel(m_image, t_x, t_y);
	}

	void ysImage::setRGB(const int &t_x, const int &t_y, const int &t_r, const int &t_g, const int &t_b)
	{
		gdImageSetPixel(m_image, t_x, t_y, gdImageColorAllocate(m_image, t_r, t_g, t_b));
	}

	Color::RGB *ysImage::getColor(const int &t_x, const int &t_y)
	{
		Color::RGB *result = new Color::RGB();
		result->setR(getRed(t_x, t_y));
		result->setG(getGreen(t_x, t_y));
		result->setB(getBlue(t_x, t_y));
		return result;
	}

	void ysImage::setColor(const int &t_x, const int &t_y, Color::RGB *t_color)
	{
		setRed(t_x, t_y, t_color->getR());
		setGreen(t_x, t_y, t_color->getG());
		setBlue(t_x, t_y, t_color->getB());
	}

	void ysImage::save()
	{
		gdImageFile(m_image, getPath().c_str());
	}

	void ysImage::saveAsBMP(const std::string &t_name)
	{
		m_fpout = fopen(t_name.c_str(), "wb");

		if (m_fpout == nullptr)
		{
			throw std::runtime_error("File not found.");
		}

		gdImageBmp(m_image, m_fpout, 1);
		fclose(m_fpout);
	}

	void ysImage::saveAsGIF(const std::string &t_name)
	{
		m_fpout = fopen(t_name.c_str(), "wb");

		if (m_fpout == nullptr)
		{
			throw std::runtime_error("File not found.");
		}

		gdImageGif(m_image, m_fpout);
		fclose(m_fpout);
	}

	void ysImage::saveAsJPEG(const std::string &t_name)
	{
		saveAsJPEG(t_name, -1);
	}

	void ysImage::saveAsJPEG(const std::string &t_name, const int &t_quality)
	{
		m_fpout = fopen(t_name.c_str(), "wb");

		if (m_fpout == nullptr)
		{
			throw std::runtime_error("File not found.");
		}

		gdImageJpeg(m_image, m_fpout, t_quality);
		fclose(m_fpout);
	}

	void ysImage::saveAsPNG(const std::string &t_name)
	{
		m_fpout = fopen(t_name.c_str(), "wb");

		if (m_fpout == nullptr)
		{
			throw std::runtime_error("File not found.");
		}

		gdImagePng(m_image, m_fpout);
		fclose(m_fpout);
	}

	void ysImage::saveAsTIFF(const std::string &t_name)
	{
		m_fpout = fopen(t_name.c_str(), "wb");

		if (m_fpout == nullptr)
		{
			throw std::runtime_error("File not found.");
		}

		gdImageTiff(m_image, m_fpout);
		fclose(m_fpout);
	}

	void ysImage::saveAsWEBP(const std::string &t_name)
	{
		saveAsWEBP(t_name, -1);
	}

	void ysImage::saveAsWEBP(const std::string &t_name, const int &t_quality)
	{
		m_fpout = fopen(t_name.c_str(), "wb");

		if (m_fpout == nullptr)
		{
			throw std::runtime_error("File not found.");
		}

		gdImageWebpEx(m_image, m_fpout, t_quality);
		fclose(m_fpout);
	}

	ysImage::~ysImage()
	{
		gdImageDestroy(m_image);
		fclose(m_fpin);
		fclose(m_fpout);
	}
}
