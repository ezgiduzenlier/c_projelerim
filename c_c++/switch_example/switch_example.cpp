
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	/*	switch (de�i�ken) {
	case d1:i�lemler;break;
	case d2:i�lemler;break;
	case d3:i�lemler;break;
	default: �artlar sa�lanmazsa �al��acak olan kodlar
	}*/

	int a, b, islem;
	cout << "Birinci say�y� girin: ";
	cin >> a;
	cout << "�kinci say�y� girin: ";
	cin >> b;
	cout << "----- i�lem se�iniz -----"<<endl;
	cout << "1.toplama" << endl;
	cout << "2.��karma" << endl;
	cout << "3.�arpma" << endl;
	cout << "4.b�lme" << endl;
	cin >> islem;

	switch (islem)
	{
	case 1: { cout << a << " + " << b << " = " << a + b;//e�er bir se�ilirse bu yap�lcak
		break;
	}
	case 2: { cout << a << " - " << b << " = " << a - b;
		break;
	}
	case 3: { cout << a << " * " << b << " = " << a * b;
		break;
	}
	case 4: {cout << a << " / " << b << " = " << a / b;
		break;
	}
	default:
		break;
	}
	
}
