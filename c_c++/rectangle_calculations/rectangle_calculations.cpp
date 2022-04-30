
#include <iostream>
#include<locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int kisa, uzun, alan, cevre;
    

    cout << "Kýsa kenarý girin: ";
    cin >> kisa;
    cout << "Uzun kenarý girin: ";
    cin >> uzun;

    alan = kisa * uzun;
    cevre = (kisa + uzun) * 2;
    
    cout << "Alan= "<< alan<<endl;
    cout << "Çevre= "<< cevre;

}