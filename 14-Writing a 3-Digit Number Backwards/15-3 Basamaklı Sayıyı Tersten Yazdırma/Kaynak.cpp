#include <iostream>
using namespace std;

int main() {

	int i, x, bir, iki, ьз;
	cout << "Uc Basamakli Bir Sayi Giriniz :";
	cin >> x;

	bir = (x % 10);
	iki = (x / 10) % 10;
	ьз = (x / 100);

	cout << bir << iki << ьз;

	return 0;
}



