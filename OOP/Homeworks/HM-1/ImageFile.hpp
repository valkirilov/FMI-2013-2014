#ifndef IMAGE_FILE_HPP__
#define IMAGE_FILE_HPP__

#include "File.hpp"

class ImageFile: public File {

protected:
	int width_;
	int height_;

public:
	ImageFile(std::string name, int width, int height)
	: File(name), width_(width), height_(height)
	{
		if (DEBUG) {
			std::cout << "ImageFile.hpp: ImageFile(std::string name, int width, int height) with " << name << ", " << width << ", " << height<< std::endl;
		}
	}

	void Open() const;

};

void ImageFile::Open() const {
	std::cout << "Opening a image" << std::endl;
}

#endif
