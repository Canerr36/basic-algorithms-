#include <iostream>
using namespace std;

int main() {

	int i, x1, x2, sonraki,x;
	x1 = 1;
	x2 = 1;
	i = 1;

	cout << "Bir Sayi Giriniz :";
	cin >> x;

	while (i <= x) {

		sonraki = x1 + x2;
		x1 = x2;
		x2 = sonraki;

		cout << sonraki << endl;

		i++;
	}
	
}

