

#include <iostream>
#include <stdlib.h>

using namespace std;
int main(int agrc, char* argv[])//dosya isminden giriken ifadeleri main fonk i�ine alal�m.
{	
	//argc : parametre say�s�n� verir.
	//argv[] : pointer bir dizidir.doya ismi ve dosya isminden sonra girilen ifadeleri tutan karakter dizisi.

	setlocale(LC_ALL, "Turksih");
	int a, b;
	a = atoi(argv[1]);//argv den gelen ilk ifadeyi ald�k
	b = atoi(argv[2]);
	//atoi fonk. : stringi inte d�n��t�r�r
	cout << a + b;
}
