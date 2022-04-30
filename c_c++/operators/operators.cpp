

#include <iostream>
#include <math.h>// it is necessary for pow and sqrt

using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int a = 10;
    int b = 4;
    int islem1, islem2, islem3, islem4, islem5, us, karekok;

    islem1 = a + b;
    islem2 = a - b;
    islem3 = a * b;
    islem4 = a / b;
    islem5 = a % b;
    us = pow(a, b);
    karekok = sqrt(25);

    cout << "toplama = " << islem1 << endl;
    cout << "çýkarma = " << islem2 << endl;
    cout << "çarpma = " << islem3 << endl;
    cout << "bölme = " << islem4 << endl;
    cout << "kalan = " << islem5 << endl;
    cout << "üslü iþlem = " << us << endl;
    cout << "köklü iþlem = " << karekok << endl;

    int number = 30;
    number += 4;// number=+4; ayný þeyi yapar
    cout << number << endl;

    int say1=3;
    int say2=5;
    say1 = say1 * say2;
    cout << say1;

    // == eþit mi?    =? eþit deðil mi?     < küçük mü?
    // evetse 1 hayýrsa 0

    int d = 2;
    int e = 7;
    int f = 7;
    cout << (d == 7);

    // and &&      or ||      not !
    // and &&      or ||      not !
        
}
   
