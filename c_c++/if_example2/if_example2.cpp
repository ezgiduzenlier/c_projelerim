// if_example2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2, sayi3;
	cout << "Birinci say�y� giriniz";
	cin >> sayi1;
	cout << "�kinci say�y� giriniz";
	cin >> sayi2;
	cout << "���nc� say�y� giriniz";
	cin >> sayi3;

	if (sayi1 > sayi2 && sayi1 > sayi3) {
		cout << "Birinci say� en b�y�k: " << sayi1;
	}
	else if (sayi2 > sayi1 && sayi2 > sayi3) {
		cout << "�kinci say� en b�y�k: " << sayi2;
	}
	else if (sayi3 > sayi2 && sayi3 > sayi1) {
		cout << "���nc� say� en b�y�k: " << sayi3;
	}

	



}