
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	/*	switch (deðiþken) {
	case d1:iþlemler;break;
	case d2:iþlemler;break;
	case d3:iþlemler;break;
	default: þartlar saðlanmazsa çalýþacak olan kodlar
	}*/

	int a, b, islem;
	cout << "Birinci sayýyý girin: ";
	cin >> a;
	cout << "Ýkinci sayýyý girin: ";
	cin >> b;
	cout << "----- iþlem seçiniz -----"<<endl;
	cout << "1.toplama" << endl;
	cout << "2.çýkarma" << endl;
	cout << "3.çarpma" << endl;
	cout << "4.bölme" << endl;
	cin >> islem;

	switch (islem)
	{
	case 1: { cout << a << " + " << b << " = " << a + b;//eðer bir seçilirse bu yapýlcak
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
