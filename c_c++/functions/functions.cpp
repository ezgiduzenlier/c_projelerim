// parametre alan:
// parametre almayan:
// geriye de�er d�nd�rmeyen:
// geriye de�er d�nd�ren:

#include <iostream>
using namespace std;

void mesaj() { // geri de�er d�nd�rmez, ekrana yaz� yazd�rmak i�in kullan�labilir.
    cout << "Fonksiyonumuz �al��t�."<<endl;
}

void topla(int sayi1,int sayi2) {//a ve b olarak g�nderdi�im de�i�kenlerimi burda sayi1 sayi2 diye isimlendirdim.
    cout << sayi1+sayi2<<endl;// void kulland�k c�nk� geri de�er d�nd�rmeyecek ekrana yazd�racak sadece.
    
}

int faktoriyel(int sayi1) {
    int i, fakt = 1;
    for (i = 1; i <= sayi1;i++) {
        fakt = fakt * i;
    }
    return fakt;//fonksiyonu bitirir ve fonk i�inde �retilen bilgiyi �a�r�lan yere geri d�nd�rmek i�in kullan�l�r
}

int max(int sayiA, int sayiB, int sayiC) {
    int buyuk;
    if (sayiA > sayiB && sayiA > sayiC) {
        buyuk = sayiA;
    }
    else if (sayiB > sayiA && sayiB > sayiC) {
        buyuk = sayiB;
    }
    else {//son ihtimal oldu�u i�in else if demedik else dedik.
        buyuk = sayiC;
    }
    return buyuk;//�a��r�ld��� yere geri d�nd�rebilmek i�in return yazd�k.
} 
int min(int sayiA, int sayiB, int sayiC) {
    int kucuk;
    if (sayiA < sayiB && sayiA < sayiC) {
        kucuk = sayiA;
    }
    else if (sayiB < sayiC && sayiB < sayiA) {
        kucuk = sayiB;
    }
    else{
        kucuk = sayiC;
    }
    return kucuk;
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    mesaj();//fonksiyonu ana fonks.i�inde �a��rmal�y�z ve main fonk. tan �nce �a��rmal�y�z yoksa hata verir.

    int a, b, c, d;
    a = 2;
    b = 5;
    c = 7;
    d = 9;
    topla(a, b);
    topla(b, c);
    topla(a, d);

    double islem;    
    islem = faktoriyel(6) + faktoriyel(5);
    cout << islem;

    cout << "-------------------------------------" << endl;
    int A, B, C, fark;
    cout << "1.say�y� girin: ";
    cin >> A;
    cout << "2.say�y� girin: ";
    cin >> B;
    cout << "3.say�y� girin: ";
    cin >> C;
    fark = max(A, B, C) - min(A, B, C);
    cout << "fark :" << fark;
}
