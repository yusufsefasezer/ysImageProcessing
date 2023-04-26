#include <iostream>
#include <ysImage.h>
#include <Effect/Greyscale.h>

int main(int argc, char const *argv[])
{
	try
	{

		ysImageProcessing::ysImage *resim = new ysImageProcessing::ysImage("pencils.jpg");

		ysImageProcessing::Effect::Greyscale *filter = new ysImageProcessing::Effect::Greyscale(resim);
		filter->setAmount(1.0f);
		filter->apply();

		resim->saveAsJPEG("pencils-filtered.jpg");

		delete filter;
		delete resim;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}

	return 0;
}