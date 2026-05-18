#include <iostream>
using namespace std;

int main() {

	int x;
	int sonuc = 1;
	cout << "Bir Sayi Giriniz :";
	cin >> x;

	while (x >= 2) {

		sonuc *= x;
		x--;
	}
	cout <<"Sonuc = "<<sonuc;

	return 0;
}