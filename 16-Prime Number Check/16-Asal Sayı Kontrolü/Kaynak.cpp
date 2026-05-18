#include <iostream>
using namespace std;
int asalhesap(int x);

int main() {

	int i, x,sonuc;

	cout << "Bir Sayi Giriniz :";
	cin >> x;

	sonuc = asalhesap(x);

	if (sonuc == 0) {
		cout << "Girilen Sayi Asal Sayi Degildir ";
	}
	else
	{
		cout << "Girilen Sayi Asal Sayidir ";
	}

	return 0;
}

int asalhesap(int x) {

	int i;

	for (i = 2; i < (x/2); i++) {
		if (x % i == 0) {
			break;
			return 0;
		}
		
	}
	

}