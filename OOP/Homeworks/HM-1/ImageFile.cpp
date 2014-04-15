#include <iostream>
#include "ImageFile.hpp"

ImageFile::ImageFile(std::string name, int width, int height)
: File(name), width_(width), height_(height)
{

	if (DEBUG) {
		std::cout << "ImageFile.hpp: ImageFile(std::string name, int width, int height) with " << name << ", " << width << ", " << height<< std::endl;
	}
}

void ImageFile::Open() const {
	std::cout << "Opening a image" << std::endl;
}

int* ImageFile::GetData() const {
	int array_size = width_*height_;
	int* data = new int[array_size];

	for (int i=0; i<array_size; i++)
		data[i] = -1;

	return data;
}