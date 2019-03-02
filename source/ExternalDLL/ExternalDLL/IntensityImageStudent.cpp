#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	this->pixels = nullptr;
	w = 0;
	h = 0;
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	delete[] this->pixels;
	w = other.w;
	h = other.h;
	this->pixels = new Intensity[other.getWidth() * other.getHeight()];
	this->pixels = other.pixels;
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	delete[] this->pixels;
	w = width;
	h = height;
	this->pixels = new Intensity[width * height];
}

IntensityImageStudent::~IntensityImageStudent() {
	delete[] this->pixels;
	this->pixels = nullptr;
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	w = width;
	h = height;
	delete[] this->pixels;
	this->pixels = new Intensity[width * height];
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	w = other.w;
	h = other.h;
	delete[] this->pixels;
	this->pixels = new Intensity[other.getWidth()* other.getHeight()];
	this->pixels = other.pixels;
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	if (x > w || y > h || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		*(this->pixels + ((x + y * w))) = pixel;
	}
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	if (i > (w * h) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		*(this->pixels + (i)) = pixel;
	}
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	if (x > w || y > h || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return *(this->pixels + ((x + y * w)));
	}
	return 0;
}

Intensity IntensityImageStudent::getPixel(int i) const {
	if (i > (w * h) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return *(this->pixels + (i));
	}
	return 0;
}