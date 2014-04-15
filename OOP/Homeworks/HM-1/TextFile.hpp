#ifndef TEXT_FILE_HH__
#define TEXT_FILE_HH__

#include "File.hpp"

class TextFile : public File {

protected:
	std::string content_;

public:
	TextFile(std::string name);

	void PrintContent() const;
	void SetContent(std::string content);

};

#endif
