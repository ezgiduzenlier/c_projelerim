
#include <iostream>
#include <iomanip>//setprecision için kütüphane ekledik
using namespace std;
int main()
{
    float sonuc1;
    sonuc1 = 1.1 / 5.3;
    cout << sonuc1;

    double sonuc2;
    sonuc2 = 1 / 5.3;
    cout<<fixed<<setprecision(8)<<sonuc2;//virgülden sonraki basamak sayýsý 8
    //fixed: virgülden sonra istediðimiz hane kadar sayý yoksa sýfýr ile tamamlar.
}

// ondalýklý sayýlarda kullanýlýr.
// float(32bit) bellekte daha düþük yer kaplar.Daha küçük sayýlarda kullanýlýr.
// double(64 bit)