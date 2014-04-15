#ifndef TXT_FILE_HH__
#define TXT_FILE_HH__

#include "File.hpp"
#include "TextFile.hpp"

class TxtFile : public TextFile {

public:
	TxtFile(std::string name);

	void Open() const;

};

#endif
