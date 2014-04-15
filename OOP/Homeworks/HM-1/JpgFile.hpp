#ifndef JPG_FILE_HPP__
#define JPG_FILE_HPP__

#include "ImageFile.hpp"

class JpgFile: public ImageFile {

public:
	JpgFile(std::string name, int width, int height);
	void Open() const;
	int* GetData() const;

};

#endif
