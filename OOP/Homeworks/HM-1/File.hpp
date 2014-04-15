#ifndef FILE_HPP__
#define FILE_HPP__

#include <string>

extern bool DEBUG;

class File {

protected:
	std::string name_;

public:
	File(std::string name);

	std::string GetName() const;
	virtual void Open() const;

};

#endif
