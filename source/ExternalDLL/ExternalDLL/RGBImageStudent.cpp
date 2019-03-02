#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
	this->pixels = nullptr;
	w = 0;
	h = 0;
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	delete[] this->pixels;
	w = other.w;
	h = other.h;
	this->pixels = new RGB[other.w * other.h];
	this->pixels = other.pixels;
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	delete[] this->pixels;
	w = width;
	h = height;
	this->pixels = new RGB[width * height];
}

RGBImageStudent::~RGBImageStudent() {
	delete[] this->pixels;
	this->pixels = nullptr;
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	w = width;
	h = height;
	delete[] this->pixels;
	this->pixels = new RGB[width * height];
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.w, other.h);
	w = other.w;
	h = other.h;
	delete[] this->pixels;
	this->pixels = new RGB[other.getWidth()* other.getHeight()];
	this->pixels = other.pixels;
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	if (x > w || y > h || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		*(this->pixels + ((x  + y * w))) = pixel;
	}
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	if (i > (w * h) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		*(this->pixels + (i)) = pixel;
	}
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	if (x > w || y > h || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return *(this->pixels + ((x + y * w)));
	}
	return 0;
}

RGB RGBImageStudent::getPixel(int i) const {
	if (i > (w * h) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return *(this->pixels + (i));
	}
	return 0;
}