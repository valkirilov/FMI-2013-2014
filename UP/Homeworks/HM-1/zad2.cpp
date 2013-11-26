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

	unsigned short n = 0;
	// Add max range
	while (n == 0) {
		cout << "Enter the numer of the internet speeds: ";
		cin >> n;
	}

	for (unsigned int index=1; index<=n; ++index) {
		unsigned int input_speed_in_mbits;
		cout << "Enter input speed " << index << " in Mbit/s: ";
		cin >> input_speed_in_mbits;

		double speed_in_mbs = input_speed_in_mbits / 8;
		cout << "The speed of Internet " << index << " is: ";
		cout << speed_in_mbs*1024 << " KB/S = ";
		cout << speed_in_mbs << " MB/s = ";
		cout << speed_in_mbs/1024 << " GB/S" << endl;
	}

	return 0;
}