all: hm2

hm2: main.o Complex.o
	g++ main.o Complex.o -g -Wall -o hm2

main.o: main.cpp Complex.hpp

Complex.o: Complex.cpp Complex.hpp

clean:
	rm -f *.o *~ a.out hm2