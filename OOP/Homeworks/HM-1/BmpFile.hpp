#ifndef BMP_FILE_HPP__
#define BMP_FILE_HPP__

#include "ImageFile.hpp"

class BmpFile: public ImageFile {

public:
	BmpFile(std::string name, int width, int height);

	void Open() const;
	int* GetData() const;

};

#endif
