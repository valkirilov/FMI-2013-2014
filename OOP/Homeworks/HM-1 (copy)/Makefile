all: hm

hm: main.o Folder.o File.o TextFile.o ImageFile.o DocFile.o PdfFile.o TxtFile.o PngFile.o JpgFile.o BmpFile.o

#comment
main.o: main.cpp Folder.hpp File.hpp TextFile.hpp ImageFile.hpp DocFile.hpp PdfFile.hpp TxtFile.hpp PngFile.hpp JpgFile.hpp BmpFile.hpp

Folder.o: Folder.cpp Folder.hpp
File.o: File.cpp File.hpp

TextFile.o: TextFile.cpp TextFile.hpp
ImageFile.o: ImageFile.cpp ImageFile.hpp

DocFile.o: DocFile.cpp DocFile.hpp
PdfFile.o: PdfFile.cpp PdfFile.hpp
TxtFile.o: TxtFile.cpp TxtFile.hpp

PngFile.o: PngFile.cpp PngFile.hpp
JpgFile.o: JpgFile.cpp JpgFile.hpp
BmpFile.o: BmpFile.cpp BmpFile.hpp

clean:
	rm -f *.o *~ a.out calc