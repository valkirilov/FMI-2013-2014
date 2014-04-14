#include <iostream>

#include "Folder.hpp"
#include "File.hpp"

#include "ImageFile.hpp"
#include "TextFile.hpp"

#include "DocFile.hpp"
#include "PdfFile.hpp"
#include "TxtFile.hpp"

#include "PngFile.hpp"
#include "JpgFile.hpp"
#include "BmpFile.hpp"

using namespace std;

bool DEBUG = false;

int main() {

	ImageFile* car = new PngFile("lamborgini.png", 200, 300);
	car->Open();
	cout << car->GetData()[0] << endl; // 0
	ImageFile* windowsXp = new JpgFile("green_hill.jpg", 100, 200);
	cout << windowsXp->GetData()[1] << endl; // 1
	
	ImageFile* windowsXp2 = new BmpFile("green_hill.jpg", 100, 200);
	cout << windowsXp2->GetData()[2] << endl; // 1

	TextFile* favoriteSites = new DocFile("bookmarks.doc");
	string sites = "reddit.com, omgbasinerda.bg, neshtodrugokoetonqmadaprochete.net, penisland.net";
	favoriteSites->SetContent(sites);
	favoriteSites->PrintContent(); // reddit.com, omgbasinerda.org, neshtodrugokoetonqmadaprochetete.net, penisland.net

	Folder* documents = new Folder("C:\\Documents");
	cout << documents->GetName() << endl;
	// documents.AddFile(favoriteSites);
	// Folder* images = new Folder("C:\\Documents\\Images");
	// documents.AddFolder(images);
	// images.AddFile(car);
	// images.AddFile(windowsXp);

	// cout << documents.GetFiles()[0].GetName(); // bookmarks.doc
	// cout << documents.GetFolders()[0].GetName(); // C:\Documents\Images
	// cout << documents.GetFolder()[0].GetFiles()[0].GetName(); // lamborgini.png

	// documents.MoveFile(favoriteSites, images);
	// File* pointerToSites = documents.GetFolder()[0].GetFiles()[2];
	// TextFile* textPointerToSites = static_cast<TextFile*>(pointerToSites);
	// textPointerToSites.PrintContent(); //reddit.com, omgbasinerda.org, neshtodrugokoetonqmadaprochete.net, penisland.net

	return 0;
}