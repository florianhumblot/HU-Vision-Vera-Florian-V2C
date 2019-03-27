#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	IntensityImage * intensitiyImg = ImageFactory::newIntensityImage(image.getWidth(), image.getHeight());
	for (unsigned int i = 0; i < image.getHeight()*image.getWidth(); i++) {
		intensitiyImg->setPixel(i, Intensity(image.getPixel(i).g));
	}
	
	return intensitiyImg;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}