

#include <iostream>
// we can use the same as on c and c++

using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    // #define PI 3.14; //sabitler ile deðiþkenleri ayýrabilmek için sabitler büyük harfle yazýlýr,eþittir kullanýlmaz
    const float PI = 3.14;//sabit tanýmlamanýn diðer yolu
    float r;
    float alan;
    cout << "Yarýçap giriniz: ";
    cin >> r;
    alan = PI *r *r;//define kullandýðýmda burasý neden hata veriyor?
    cout << "Alan: "<< alan;
}