#ifndef IMAGE_FILE_HPP__
#define IMAGE_FILE_HPP__

#include "File.hpp"

class ImageFile: public File {

protected:
	int width_;
	int height_;

public:
	ImageFile(std::string name, int width, int height);
	
	void Open() const;
	virtual int* GetData() const;

};


#endif
