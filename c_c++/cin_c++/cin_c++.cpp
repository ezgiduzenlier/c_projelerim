
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1;
	float sayi2;
	double sayi3;

	cout << "Bir tam sayi giriniz: ";//kullan�c�ya mesaj
	cin >> sayi1;// kullan�c�dan girdi alma.
	cout << "Float tipinde bir sayi giriniz: ";
	cin >> sayi2;
	cout << "Double tipinde bir sayi giriniz: ";
	cin >> sayi3;

	cout << sayi1 << endl;// endl alta ge�er
	cout << sayi2 << endl;
	cout << sayi3 << endl; //c deki ayn� �ey oluyo kendi kendine say� at�yo, neden?
}
