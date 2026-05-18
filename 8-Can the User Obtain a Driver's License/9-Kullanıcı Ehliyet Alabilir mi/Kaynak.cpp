#include <iostream>
using namespace std;
bool ehliyet(int x);

int main() {

	int x, sonuc;

	cout << "Yasinizi Giriniz :";
	cin >> x;

	sonuc = ehliyet(x);
	if (sonuc == false) {
		cout << "Ehliyet Alabilirsiniz ";
	}
	else
	{
		cout << "Ehliyet Alamazsiniz ";
	}



}

bool ehliyet(int x) {

	if (x < 18 == false) {
		return false;
	}
	else
	{
		return true;
	}

}