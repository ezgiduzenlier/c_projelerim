

#include <iostream>
#include <stdlib.h>

using namespace std;
int main(int agrc, char* argv[])//dosya isminden giriken ifadeleri main fonk içine alalým.
{	
	//argc : parametre sayýsýný verir.
	//argv[] : pointer bir dizidir.doya ismi ve dosya isminden sonra girilen ifadeleri tutan karakter dizisi.

	setlocale(LC_ALL, "Turksih");
	int a, b;
	a = atoi(argv[1]);//argv den gelen ilk ifadeyi aldýk
	b = atoi(argv[2]);
	//atoi fonk. : stringi inte dönüþtürür
	cout << a + b;
}
