#include <iostream>
#include "ysImage.h"
#include "Effect/Greyscale.h"

int main(int argc, char const *argv[])
{
	try
	{

		ysImage *resim = new ysImage("files/yusuf-sezer.jpg");

		Greyscale *filter = new Greyscale(resim);
		filter->setAmount(1.0f);
		filter->apply();

		resim->saveAsJPEG("files/yusuf-sezer-filtered.jpg");

		delete filter;
		delete resim;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}

	return 0;
}