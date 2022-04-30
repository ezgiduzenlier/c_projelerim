// if_example2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2, sayi3;
	cout << "Birinci sayýyý giriniz";
	cin >> sayi1;
	cout << "Ýkinci sayýyý giriniz";
	cin >> sayi2;
	cout << "Üçüncü sayýyý giriniz";
	cin >> sayi3;

	if (sayi1 > sayi2 && sayi1 > sayi3) {
		cout << "Birinci sayý en büyük: " << sayi1;
	}
	else if (sayi2 > sayi1 && sayi2 > sayi3) {
		cout << "Ýkinci sayý en büyük: " << sayi2;
	}
	else if (sayi3 > sayi2 && sayi3 > sayi1) {
		cout << "Üçüncü sayý en büyük: " << sayi3;
	}

	



}