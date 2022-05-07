

#include <iostream>
using namespace std;

template<typename T>//aþýrý yüklenmenin önüne geçebilmek için þablon sýnýfý(template sýnýfý) oluþturduk.
T guncelle(T a) {
	return ++a;
}//böyle yapmasaydýk her veri tipi için ayrý bir fonk. yazmak zorunda kalacaktýk.

int main()
{
	int a = 5;
	double b = 10.3;
	cout << guncelle(b) << endl;
}
