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

bool is_odd(int number) {
	return (number % 2) == 1;
}

int main() {

	int n = -1;
	while (n<0 || n>1000) {
		cin >> n;
	}

	int sum = 0;
	for (int index=1; index<=n; ++index) {
		if (is_odd(index)) {
			sum += index;
		}
	}

	cout << sum << endl;

	return 0;
}