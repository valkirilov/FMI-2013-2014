#include <iostream>
#include "PngFile.hpp"

PngFile::PngFile(std::string name, int width, int height)
: ImageFile(name, width, height)
{
	if (DEBUG) {
		std::cout << "PngFile.hpp: PngFile(std::string name, int width, int height) with " << name << ", " << width << ", " << height<< std::endl;
	}
}

void PngFile::Open() const {
	std::cout << "Opening a png" << std::endl;
}

int* PngFile::GetData() const {
	int array_size = width_*height_;
	int* data = new int[array_size];

	for (int i=0; i<array_size; i++)
		data[i] = 0;

	return data;
}