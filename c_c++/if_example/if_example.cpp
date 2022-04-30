// if_example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi;
	cout << "Sayý giriniz: ";
	cin >> sayi;
	if (sayi % 2 == 0) {
		cout << "Sayý çifttir.";
	}else{
		cout << "Sayý tektir.";
	}


}