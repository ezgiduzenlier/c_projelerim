
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int vize, final, ort;

    cout << "Vizeyi giriniz: ";
    cin >> vize;
    cout << "Finali giriniz: ";
    cin >> final;
    ort = (vize * 40 / 100) + (final * 60 / 100);
    cout << "Ortalamanýz: " << ort;

}
