

#include <iostream>
using namespace std;

template<typename T>//a��r� y�klenmenin �n�ne ge�ebilmek i�in �ablon s�n�f�(template s�n�f�) olu�turduk.
T guncelle(T a) {
	return ++a;
}//b�yle yapmasayd�k her veri tipi i�in ayr� bir fonk. yazmak zorunda kalacakt�k.

int main()
{
	int a = 5;
	double b = 10.3;
	cout << guncelle(b) << endl;
}
