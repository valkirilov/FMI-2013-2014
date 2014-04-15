#include <iostream>
#include "Folder.hpp"

Folder::Folder(std::string name)
: name_(name) {

	if (DEBUG) {
		std::cout << "Folder.cpp: Folder(std::string name) with " << name << std::endl;
	}
}

std::string Folder::GetName() const {
	return name_;
}

std::vector<File*>& Folder::GetFiles() {
	return files_;
}
std::vector<Folder*>& Folder::GetFolders() {
	return folders_;
}

void Folder::AddFolder(Folder* folder) {
	folders_.push_back(folder);

	if (DEBUG) {
		std::cout << "Folder.cpp: AddFolder(Folder* folder) with " << folder->GetName() << std::endl;
	}
}

void Folder::DeleteFolder(Folder* folder) {
	int folderToErase = -1;

	for (unsigned i=0; i<folders_.size(); ++i) {
    	if (folders_[i] == folder) {
    		folderToErase = i;
    	}
	}

	if (folderToErase > -1)
		folders_.erase(folders_.begin()+folderToErase);
}

void Folder::AddFile(File* file) {
	files_.push_back(file);	

	if (DEBUG) {
		std::cout << "Folder.cpp: AddFile(File* file) with " << file->GetName() << std::endl;
	}
}

void Folder::DeleteFile(File* file) {
	int fileToErase = -1;
	//std::cout << "Deleting file " << file->GetName() << std::endl;

	for (unsigned i=0; i<files_.size(); ++i) {
		//std::cout << i << ": " << files_[i]->GetName() << "; ";

    	if (files_[i] == file) {
    		fileToErase = i;
    	}
	}

	if (fileToErase > -1)
		files_.erase(files_.begin()+fileToErase);
}

void Folder::MoveFileTo(File* file, Folder* newFolder) {
	//std::cout << "Moving file " << file->GetName() << " to folder " << newFolder->GetName() << std::endl;
	newFolder->AddFile(file);

	//std::cout << "Deleting file " << file->GetName() << " from this folder." << std::endl;
	DeleteFile(file);
}

void Folder::PrintFolders() {
	std::cout << "Folders in " << name_ << ":" << std::endl;
	for (unsigned i=0; i<folders_.size(); ++i) {
    	std::cout << " " << folders_[i]->GetName();
	}
	std::cout << std::endl;
}
void Folder::PrintFiles() {
	std::cout << "Files in " << name_ << ":" << std::endl;
	for (unsigned i=0; i<files_.size(); ++i) {
    	std::cout << " " << files_[i]->GetName();
	}
	std::cout << std::endl;
}