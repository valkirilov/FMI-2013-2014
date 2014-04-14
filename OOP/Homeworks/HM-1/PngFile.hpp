#ifndef PNG_FILE_HPP__
#define PNG_FILE_HPP__

#include "ImageFile.hpp"

class PngFile: public ImageFile {

public:
	PngFile(std::string name, int width, int height)
	: ImageFile(name, width, height)
	{
		if (DEBUG) {
			std::cout << "PngFile.hpp: PngFile(std::string name, int width, int height) with " << name << ", " << width << ", " << height<< std::endl;
		}
	}

	void Open() const;
	int* GetData() const;

};

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

#endif
