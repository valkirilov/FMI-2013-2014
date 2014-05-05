#ifndef DOC_FILE_HH__
#define DOC_FILE_HH__

#include "File.hpp"
#include "TextFile.hpp"

class DocFile : public TextFile {

public:
	DocFile(std::string name);

	void Open() const;

};

#endif
