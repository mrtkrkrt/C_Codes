#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char kullanici[20];
    char parola[20];
    char gercekkullanici[20]="admin";
    char gercekparola[20]="admin123";


  //  strcmp(dizi,dizi2);         //iki diziyi karþýlaþtýrýyuo eðer ayný ise sýfýr deðerini döndürüyo...eðer sýfýrdan küçük bir sayý döndürülüyosa dizi dizi1 den daha buyuk oluyo alfabetik olarak...tam tersinde ise sýfýrdan buyuk bir deger donduruyo

    printf("Lütfen kullanýcý adýný ve parolanýýzý  giriniz :\n");
    scanf("%s%s",kullanici,parola);

    if (strcmp(kullanici,gercekkullanici)==0 && strcmp(parola,gercekparola)==0);{
        printf("HOÞGELDÝNÝZ...");
    }



    if (strcmp(kullanici,gercekkullanici)!=0){
        printf("Kullanýcý adýnýzý yanlýþ girdiniz...");
    }

    if (strcmp(parola,gercekparola)!=0){
        printf("Þifre yanlýþ girildi...");
    }




    return 0;
}
