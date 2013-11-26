/*
 *  Programming basics
 *  FMI SU "St. Kliment Ohridski"
 *   
 *  Valentin Kirilov
 *  val.kirilov@gmail.com
 *  valkirilov.com
 *
 *  26 November 2013
 *
 */

#include <iostream>
using namespace std;

int main() {

	int n = -1;

	while (n < 0 || n > 15) {
		cout << "Enter number N: ";
		cin >> n;
	}

	int factoriel = 1;
	for (int index=1; index<=n; ++index) {
		factoriel *= index;
	}

	cout << "The " << n << " factoriel is " << factoriel << endl;

	return 0;
}