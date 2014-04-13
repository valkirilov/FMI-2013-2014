#ifndef FOLDER_HH__
#define FOLDER_HH__

#include "File.hpp"

class FolderError {};

class Folder {

	std::string name_;

public:
	Folder(std::string name)
	: name_(name) {
		if (DEBUG) {
			std::cout << "Folder.hpp: Folder(std::string name) with " << name << std::endl;
		}
	}

	std::string GetName() const;

	void AddFolder(Folder* folder); 		// adds the specified folder
	void DeleteFolder(Folder* folder); 		// deletes the specifed folder
	void AddFile(File* file); 				// adds the specified file
	void DeleteFile(File* file); 			// deletes the specified file
	void MoveFileTo(File* file, Folder* newFolder); // moves the file from the current folder to the newFolder

};

std::string Folder::GetName() const {
	return name_;
}

#endif
