// if_example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi;
	cout << "Say� giriniz: ";
	cin >> sayi;
	if (sayi % 2 == 0) {
		cout << "Say� �ifttir.";
	}else{
		cout << "Say� tektir.";
	}


}