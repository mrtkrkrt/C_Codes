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


  //  strcmp(dizi,dizi2);         //iki diziyi kar��la�t�r�yuo e�er ayn� ise s�f�r de�erini d�nd�r�yo...e�er s�f�rdan k���k bir say� d�nd�r�l�yosa dizi dizi1 den daha buyuk oluyo alfabetik olarak...tam tersinde ise s�f�rdan buyuk bir deger donduruyo

    printf("L�tfen kullan�c� ad�n� ve parolan��z�  giriniz :\n");
    scanf("%s%s",kullanici,parola);

    if (strcmp(kullanici,gercekkullanici)==0 && strcmp(parola,gercekparola)==0);{
        printf("HO�GELD�N�Z...");
    }



    if (strcmp(kullanici,gercekkullanici)!=0){
        printf("Kullan�c� ad�n�z� yanl�� girdiniz...");
    }

    if (strcmp(parola,gercekparola)!=0){
        printf("�ifre yanl�� girildi...");
    }




    return 0;
}
