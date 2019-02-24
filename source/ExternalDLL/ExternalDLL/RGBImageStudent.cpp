#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
	
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	this->pixels.resize(other.getWidth() * other.getHeight());
	this->pixels = other.pixels;
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	this->pixels.resize(width*height + height);
}

RGBImageStudent::~RGBImageStudent() {
	this->pixels.clear();
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	this->pixels.resize(width * height + height);
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	this->pixels.resize(other.getWidth() * other.getHeight() + other.getHeight());
	this->pixels = other.pixels;
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	if (x > getWidth() || y > getHeight() || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		pixels[x + y * getWidth()] = pixel;
	}
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	if (i > (getWidth() * getHeight()) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		pixels[i] = pixel;
	}
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	if (x > getWidth() || y > getHeight() || x < 0 || y < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return pixels[x + y * getWidth()];
	}
	return 0;
}

RGB RGBImageStudent::getPixel(int i) const {
	if (i > (getWidth() * getHeight()) || i < 0) {
		int throwError = 0, e = 1 / throwError;
	}
	else {
		return pixels[i];
	}
	return 0;
}