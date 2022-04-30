
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1;
	float sayi2;
	double sayi3;

	cout << "Bir tam sayi giriniz: ";//kullanýcýya mesaj
	cin >> sayi1;// kullanýcýdan girdi alma.
	cout << "Float tipinde bir sayi giriniz: ";
	cin >> sayi2;
	cout << "Double tipinde bir sayi giriniz: ";
	cin >> sayi3;

	cout << sayi1 << endl;// endl alta geçer
	cout << sayi2 << endl;
	cout << sayi3 << endl; //c deki ayný þey oluyo kendi kendine sayý atýyo, neden?
}
