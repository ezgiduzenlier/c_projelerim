#include <stdio.h>
#include <iostream>
#include<stdlib.h>

int main() {
	
	int sayi1;
	float sayi2;
	double sayi3;

		//const char* anil = "anil";  sað tarfa yazýlan deðiþtirilemez yani sabit.
		char* deneme = (char*)malloc(sizeof(char) * 20);//char* için malloc ile 20 charlýk yer ayýrdýk.
		deneme = (char*)"anil";
		printf("%s", deneme);
		char deneme2[20];
		scanf_s("%s", deneme2, 20);
		printf("Deneme:  %s", deneme);
		scanf_s("%s", deneme2, 10);
		printf("Deneme 2: %s", deneme2);

		return 6;
	

	printf("Bir tam sayi girin: ");// yazýmýzý yazmasý için ilk önce türünü sonra ramdeki yerini göster
	scanf_s("%d",&sayi1);// scanf de yer belirtmek için & kullan.

	printf("Float tipinde bir sayi girin: ");
	scanf_s("%f", &sayi2);

	printf("Double tipinde bir sayi girin: ");
	scanf_s("%lf", &sayi3);

	// scanf ten gelen veriyi ekranda yazdýrmak için
	printf("%d\n", sayi1);// önce tipini sonra deðiþken adýný belirt
	printf("%f.2\n", sayi2);
	printf("%lf\n", sayi3);// olmadý burasý yine bak
	
}