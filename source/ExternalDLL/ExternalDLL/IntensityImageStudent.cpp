#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	//int throwError = 0, e = 1 / throwError; //Throws error without the need to include a header
	//TODO: Nothing
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	//int throwError = 0, e = 1 / throwError;
	//TODO: Create a copy from the other object
	this->pixels.resize(other.getWidth() * other.getHeight());
	this->pixels = other.pixels;
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	//int throwError = 0, e = 1 / throwError;
	//TODO: Initialize pixel storage
	this->pixels.resize(width*height + height);
}

IntensityImageStudent::~IntensityImageStudent() {
	//int throwError = 0, e = 1 / throwError;
	//TODO: delete allocated objects
	this->pixels.clear();
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	//int throwError = 0, e = 1 / throwError;
	//TODO: resize or create a new pixel storage (Don't forget to delete the old storage)
	this->pixels.resize(width * height + height);
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	//int throwError = 0, e = 1 / throwError;
	//TODO: resize or create a new pixel storage and copy the object (Don't forget to delete the old storage)
	this->pixels.resize(other.getWidth() * other.getHeight() + other.getHeight());
	this->pixels = other.pixels;
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	//int throwError = 0, e = 1 / throwError;
	//TODO: no comment needed :)
	if (x > getWidth() || y > getHeight() || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		pixels[x + y * getWidth()] = pixel;
	}
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	if (i > (getWidth() * getHeight()) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		pixels[i] = pixel;
	}
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	//TODO: no comment needed :)
	if (x > getWidth() || y > getHeight() || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return pixels[x + y * getWidth()];
	}
	return 0;
}

Intensity IntensityImageStudent::getPixel(int i) const {
	//TODO: see setPixel(int i, RGB pixel)
	if (i > (getWidth() * getHeight()) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return pixels[i];
	}
	return 0;
}