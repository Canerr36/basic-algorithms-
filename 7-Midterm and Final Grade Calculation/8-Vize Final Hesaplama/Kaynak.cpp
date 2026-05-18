#include <iostream>
using namespace std;
int makina(int x,int y);


int main() {

	int x, y, sonuc;

	cout << "Vize Notunuzu Giriniz :";
	cin >> x;
	cout << "Final Notunuzu Giriniz :";
	cin >> y;


	sonuc = makina(x,y);

	cout << "Sonucunuz : " << sonuc;
	

}

int makina(int x,int y) {

	int a, b, sonuc;
	a = x * 0.4;
	b = y * 0.6;
	sonuc = a + b;

	return sonuc;
	
}