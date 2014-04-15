#include <iostream>

#include "Complex.hpp"

using namespace std;

int main() {

	Complex one(1, 0),
    two(2, 0),
    unit(1, 1),
    sample(4, -5),
    i = Complex::GetI();

	cout << (one.Real() == 1) << endl; // true;
	cout << (i.Imaginary() == 0) << endl; // true;

	cout << one + two; // 3
	// cout << two - one; // 1
	// cout << sample + i; // 4 - 4i
	// cout << one * i; // 0 + i
	// cout << one / i; // 0 - i;

	// cout << one.Root(0, 2); // 1
	// cout << one.Root(1, 2); // -1
	// cout << one.Root(2, 4); // 0 + i
	// cout << i.Power(2); // 1
	// cout << i ^ 2; // 1
	// cout << (sample + 2 * i).Modulus(); // 5 

	// cout << i == Complex(0, 1); // true
	// cout << unit == one + i; // true
	// cout << sample != i; // false

	return 0;
}