
#include <iostream>
#include <iomanip>//setprecision i�in k�t�phane ekledik
using namespace std;
int main()
{
    float sonuc1;
    sonuc1 = 1.1 / 5.3;
    cout << sonuc1;

    double sonuc2;
    sonuc2 = 1 / 5.3;
    cout<<fixed<<setprecision(8)<<sonuc2;//virg�lden sonraki basamak say�s� 8
    //fixed: virg�lden sonra istedi�imiz hane kadar say� yoksa s�f�r ile tamamlar.
}

// ondal�kl� say�larda kullan�l�r.
// float(32bit) bellekte daha d���k yer kaplar.Daha k���k say�larda kullan�l�r.
// double(64 bit)