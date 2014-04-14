#ifndef BMP_FILE_HPP__
#define BMP_FILE_HPP__

#include "ImageFile.hpp"

class BmpFile: public ImageFile {

public:
	BmpFile(std::string name, int width, int height)
	: ImageFile(name, width, height)
	{
		if (DEBUG) {
			std::cout << "BmpFile.hpp: BmpFile(std::string name, int width, int height) with " << name << ", " << width << ", " << height<< std::endl;
		}
	}

	void Open() const;
	int* GetData() const;

};

void BmpFile::Open() const {
	std::cout << "Opening a bmp" << std::endl;
}

int* BmpFile::GetData() const {
	int array_size = width_*height_;
	int* data = new int[array_size];

	for (int i=0; i<array_size; i++)
		data[i] = 2;

	return data;
}

#endif
