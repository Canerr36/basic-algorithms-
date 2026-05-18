#include <iostream>
using namespace std;

int main() {


	int i, a, b, c, d, z;

	cout << "3 Basamakli Mi 4 Basamakli Mi Armstrong Sayisi Ariyorsunuz :";
	cin >> z;
	
	switch (z) {
	case 3:
		for (i = 100; i <= 999; i++) {

			a = i % 10;
			b = (i / 10) % 10;
			c = i / 100;

			if ((c * c * c) + (b * b * b) + (a * a * a) == i) {
				cout << i << endl;
			}
		} break;

	case 4:
		for (i = 1000; i <= 9999; i++) {

			a = i % 10;
			b = (i / 10) % 10;
			c = (i / 100) % 10;
			d = i / 1000;

			if ((d * d * d * d) + (c * c * c * c) + (b * b * b * b) + (a * a * a * a) == i) {
				cout << i << endl;
			}

		} break;

	}



}