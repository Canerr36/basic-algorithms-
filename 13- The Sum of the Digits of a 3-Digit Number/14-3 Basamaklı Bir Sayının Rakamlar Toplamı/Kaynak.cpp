#include <iostream>
using namespace std;

int main() {

	int i, x, bir, iki, ьз, toplma;
	cout << "Uc Basamakli Bir Sayi Giriniz :";
	cin >> x;

	ьз = (x % 10);
	iki = (x / 10) % 10;
	bir = (x / 100);

	toplma = ьз + iki + bir;
	cout << toplma;

	return 0;
}



