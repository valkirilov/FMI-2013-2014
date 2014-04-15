#ifndef FOLDER_HH__
#define FOLDER_HH__

#include <vector>
#include "File.hpp"

class Folder {

	std::string name_;
	std::vector<File*> files_;
	std::vector<Folder*> folders_;

public:
	Folder(std::string name);

	std::string GetName() const;
	std::vector<File*>& GetFiles();
	std::vector<Folder*>& GetFolders();

	void AddFolder(Folder* folder); 		// adds the specified folder
	void DeleteFolder(Folder* folder); 		// deletes the specifed folder
	void AddFile(File* file); 				// adds the specified file
	void DeleteFile(File* file); 			// deletes the specified file
	void MoveFileTo(File* file, Folder* newFolder); // moves the file from the current folder to the newFolder

	// Aditional methods to help me see what I am doing
	void PrintFolders();
	void PrintFiles();

};


#endif
