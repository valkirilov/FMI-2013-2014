/*
 *  OOP
 *  FMI SU "St. Kliment Ohridski"
 *   
 *  Valentin Kirilov
 *  val.kirilov@gmail.com
 *  valkirilov.com
 *
 *  21 April 2014
 *
 */

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

	cout << one + two << endl; // 3
	cout << two - one << endl; // 1
	cout << sample + i << endl; // 4 - 4i
	cout << one * i << endl; // 0 + i
	cout << one / i << endl; // 0 - i;

	//cout << "Conjugate" << endl;
	//cout << sample.Conjugate() <<  endl;

	// cout << one.Root(0, 2); // 1
	// cout << one.Root(1, 2); // -1
	// cout << one.Root(2, 4); // 0 + i
	cout << i.Power(2); // 1
	cout << (i ^ 2); // 1
	cout << (sample + 2 * i).Modulus(); // 5 

	//Complex read;
	//cin >> read;
	//cout << "Print: " <<read << endl;

	cout << (i == Complex(0, 1)) << endl; // true
	cout << (unit == one + i) << endl; // true
	cout << (sample != i) << endl; // false

	return 0;
}