#ifndef FILE_HPP__
#define FILE_HPP__

extern bool DEBUG;

class File {

protected:
	std::string name_;

public:
	File(std::string name)
	: name_(name)
	{
		if (DEBUG) {
			std::cout << "File.hpp: File(std::string name) with " << name << std::endl;
		}
	}

	std::string GetName() const;
	virtual void Open() const;

};

std::string File::GetName() const {
	return name_;
}

void File::Open() const {
	std::cout << "Opening a file" << std::endl;
}

#endif
