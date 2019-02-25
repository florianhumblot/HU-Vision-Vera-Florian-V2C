#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
	
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	delete[] this->pixels;
	this->pixels = new RGB[other.getWidth() * other.getHeight()];
	this->pixels = other.pixels;
	this->ptr = &this->pixels[0];
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	delete[] this->pixels;
	this->pixels = new RGB[width * height];
	this->ptr = &this->pixels[0];
}

RGBImageStudent::~RGBImageStudent() {
	delete[] this->pixels;
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	delete[] this->pixels;
	this->pixels = new RGB[width * height];
	this->ptr = &this->pixels[0];
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	delete[] this->pixels;
	this->pixels = new RGB[other.getWidth()* other.getHeight()];
	this->pixels = other.pixels;
	this->ptr = &this->pixels[0];
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	if (x > getWidth() || y > getHeight() || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		*(ptr + ((x  + y * getWidth()))) = pixel;
	}
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	if (i > (getWidth() * getHeight()) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		*(ptr + (i)) = pixel;
	}
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	if (x > getWidth() || y > getHeight() || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return *(ptr + ((x + y * getWidth())));
	}
	return 0;
}

RGB RGBImageStudent::getPixel(int i) const {
	if (i > (getWidth() * getHeight()) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return *(ptr + (i));
	}
	return 0;
}