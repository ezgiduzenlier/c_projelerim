#include <stdio.h>
#include <iostream>
#include<stdlib.h>

int main() {
	
	int sayi1;
	float sayi2;
	double sayi3;

		//const char* anil = "anil";  sa� tarfa yaz�lan de�i�tirilemez yani sabit.
		char* deneme = (char*)malloc(sizeof(char) * 20);//char* i�in malloc ile 20 charl�k yer ay�rd�k.
		deneme = (char*)"anil";
		printf("%s", deneme);
		char deneme2[20];
		scanf_s("%s", deneme2, 20);
		printf("Deneme:  %s", deneme);
		scanf_s("%s", deneme2, 10);
		printf("Deneme 2: %s", deneme2);

		return 6;
	

	printf("Bir tam sayi girin: ");// yaz�m�z� yazmas� i�in ilk �nce t�r�n� sonra ramdeki yerini g�ster
	scanf_s("%d",&sayi1);// scanf de yer belirtmek i�in & kullan.

	printf("Float tipinde bir sayi girin: ");
	scanf_s("%f", &sayi2);

	printf("Double tipinde bir sayi girin: ");
	scanf_s("%lf", &sayi3);

	// scanf ten gelen veriyi ekranda yazd�rmak i�in
	printf("%d\n", sayi1);// �nce tipini sonra de�i�ken ad�n� belirt
	printf("%f.2\n", sayi2);
	printf("%lf\n", sayi3);// olmad� buras� yine bak
	
}