#ifndef TEXT_FILE_HH__
#define TEXT_FILE_HH__

#include "File.hpp"

class TextFile : public File {

public:
	TextFile(std::string name);
	~TextFile();

};

#endif
