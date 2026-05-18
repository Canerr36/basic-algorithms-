#include <iostream>
using namespace std;

int main() {

	int i, j, x;
	
	cout << "Kaca Kaclik Carpim Tablosu Istersiniz :";
	cin >> x;

	for (i = 1; i <= x; i++) {
		for (j = 1; j <= x; j++) {
			cout <<i<<" * "<< j << " = " << i * j << "  ";
		}
		cout << " " << endl;
	}
	

	return 0;
}