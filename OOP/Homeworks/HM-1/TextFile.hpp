#ifndef TEXT_FILE_HH__
#define TEXT_FILE_HH__

#include "File.hpp"

class TextFile : public File {

protected:
	std::string content_;

public:
	TextFile(std::string name)
	: File(name)
	{		
		if (DEBUG) {
			std::cout << "TextFile.hpp: TextFile(std::string name) with " << name << std::endl;
		}
	}

	void PrintContent() const;
	void SetContent(std::string content);

};

void TextFile::PrintContent() const {
	std::cout << content_ << std::endl;
}
void TextFile::SetContent(std::string content) {
	content_ = content;
}

#endif
