// parametre alan:
// parametre almayan:
// geriye deðer döndürmeyen:
// geriye deðer döndüren:

#include <iostream>
using namespace std;

void mesaj() { // geri deðer döndürmez, ekrana yazý yazdýrmak için kullanýlabilir.
    cout << "Fonksiyonumuz çalýþtý."<<endl;
}

void topla(int sayi1,int sayi2) {//a ve b olarak gönderdiðim deðiþkenlerimi burda sayi1 sayi2 diye isimlendirdim.
    cout << sayi1+sayi2<<endl;// void kullandýk cünkü geri deðer döndürmeyecek ekrana yazdýracak sadece.
    
}

int faktoriyel(int sayi1) {
    int i, fakt = 1;
    for (i = 1; i <= sayi1;i++) {
        fakt = fakt * i;
    }
    return fakt;//fonksiyonu bitirir ve fonk içinde üretilen bilgiyi çaðrýlan yere geri döndürmek için kullanýlýr
}

int max(int sayiA, int sayiB, int sayiC) {
    int buyuk;
    if (sayiA > sayiB && sayiA > sayiC) {
        buyuk = sayiA;
    }
    else if (sayiB > sayiA && sayiB > sayiC) {
        buyuk = sayiB;
    }
    else {//son ihtimal olduðu için else if demedik else dedik.
        buyuk = sayiC;
    }
    return buyuk;//çaðýrýldýðý yere geri döndürebilmek için return yazdýk.
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
    mesaj();//fonksiyonu ana fonks.içinde çaðýrmalýyýz ve main fonk. tan önce çaðýrmalýyýz yoksa hata verir.

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
    cout << "1.sayýyý girin: ";
    cin >> A;
    cout << "2.sayýyý girin: ";
    cin >> B;
    cout << "3.sayýyý girin: ";
    cin >> C;
    fark = max(A, B, C) - min(A, B, C);
    cout << "fark :" << fark;
}
