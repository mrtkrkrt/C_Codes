#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char isim[20]= "AD: ";
    char meslek[30]= "MESLEK: ";
    char isimgir[20];
    char meslekgir[80];

    printf("l�tfen isim ve meslek giriniz\n");
    gets(isimgir);
    printf("\n");
    gets(meslekgir);
    printf("\n");

    char kullanici[50]="";

    strcat(isim,isimgir);        //bu� bi diziye bi�eyler atamak i�in
    strcat(meslek,meslekgir);
    strcat(kullanici,isim);
    strcat(kullanici,meslek);


    printf("%s",kullanici);
    return 0;
}
