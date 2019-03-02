#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	IntensityImage * intensitiyImg = new IntensityImageStudent();
	for (unsigned int i = 0; i < image.getHeight()*image.getWidth(); i++) {
		int gray = 0.299 * image.getPixel(i).r + 0.587 * image.getPixel(i).g + 0.114 * image.getPixel(i).b;
		Intensity intens = Intensity(gray);
		intensitiyImg->setPixel(i, intens);
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