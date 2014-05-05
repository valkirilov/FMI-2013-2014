#ifndef PNG_FILE_HPP__
#define PNG_FILE_HPP__

#include "ImageFile.hpp"

class PngFile: public ImageFile {

public:
	PngFile(std::string name, int width, int height);

	void Open() const;
	int* GetData() const;

};

#endif
