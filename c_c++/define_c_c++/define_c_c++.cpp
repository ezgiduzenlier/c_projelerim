

#include <iostream>
// we can use the same as on c and c++

using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    // #define PI 3.14; //sabitler ile de�i�kenleri ay�rabilmek i�in sabitler b�y�k harfle yaz�l�r,e�ittir kullan�lmaz
    const float PI = 3.14;//sabit tan�mlaman�n di�er yolu
    float r;
    float alan;
    cout << "Yar��ap giriniz: ";
    cin >> r;
    alan = PI *r *r;//define kulland���mda buras� neden hata veriyor?
    cout << "Alan: "<< alan;
}