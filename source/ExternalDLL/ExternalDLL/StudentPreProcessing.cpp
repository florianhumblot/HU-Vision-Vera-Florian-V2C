#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	IntensityImage * intensitiyImg = new IntensityImageStudent(image.getWidth(), image.getHeight());
	for (unsigned int i = 0; i < image.getHeight()*image.getWidth(); i++) {
		RGB pixelRGB = image.getPixel(i);
		int gray = 0.299 * pixelRGB.r + 0.587 * pixelRGB.g + 0.114 * pixelRGB.b;
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