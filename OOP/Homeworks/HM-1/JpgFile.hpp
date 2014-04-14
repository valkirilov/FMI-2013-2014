#ifndef JPG_FILE_HPP__
#define JPG_FILE_HPP__

#include "ImageFile.hpp"

class JpgFile: public ImageFile {

public:
	JpgFile(std::string name, int width, int height)
	: ImageFile(name, width, height)
	{
		if (DEBUG) {
			std::cout << "JpgFile.hpp: JpgFile(std::string name, int width, int height) with " << name << ", " << width << ", " << height<< std::endl;
		}
	}

	void Open() const;
	int* GetData() const;

};

void JpgFile::Open() const {
	std::cout << "Opening a jpg" << std::endl;
}

int* JpgFile::GetData() const {
	int array_size = width_*height_;
	int* data = new int[array_size];

	for (int i=0; i<array_size; i++)
		data[i] = 1;

	return data;
}

#endif
