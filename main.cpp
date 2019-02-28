#include <iostream>
#include "ysImage.h"
#include "Effect/Greyscale.h"

using namespace std;
using namespace ysImageProcessing;
using namespace ysImageProcessing::Effect;

int main(int argc, char** argv) {

	try {

		ysImage *resim = new ysImage("files/yusuf-sezer.jpg");

		Greyscale *filter = new Greyscale(resim);
		filter->setAmount(1.0f);
		filter->apply();

		resim->saveAsJPEG("files/yusuf-sezer-filtered.jpg");

		delete filter;
		delete resim;

	} catch (std::exception &e) {
		cerr << e.what();
	}

	return 0;
}