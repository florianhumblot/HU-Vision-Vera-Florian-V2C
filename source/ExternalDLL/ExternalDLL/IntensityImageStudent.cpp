#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {

}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	delete[] this->pixels;
	this->pixels = new Intensity[other.getWidth() * other.getHeight()];
	this->pixels = other.pixels;
	this->ptr = &this->pixels[0];
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	delete[] this->pixels;
	this->pixels = new Intensity[width * height];
	this->ptr = &this->pixels[0];
}

IntensityImageStudent::~IntensityImageStudent() {
	delete[] this->pixels;
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	delete[] this->pixels;
	this->pixels = new Intensity[width * height];
	this->ptr = &this->pixels[0];
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	delete[] this->pixels;
	this->pixels = new Intensity[other.getWidth()* other.getHeight()];
	this->pixels = other.pixels;
	this->ptr = &this->pixels[0];
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	if (x > getWidth() || y > getHeight() || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		*(ptr + ((x + y * getWidth()))) = pixel;
	}
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	if (i > (getWidth() * getHeight()) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		*(ptr + (i)) = pixel;
	}
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	if (x > getWidth() || y > getHeight() || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return *(ptr + ((x + y * getWidth())));
	}
	return 0;
}

Intensity IntensityImageStudent::getPixel(int i) const {
	if (i > (getWidth() * getHeight()) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return *(ptr + (i));
	}
	return 0;
}