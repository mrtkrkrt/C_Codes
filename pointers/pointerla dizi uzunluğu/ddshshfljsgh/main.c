#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int diziuzunlu(char *karakter)
{
    int karakter1=0;

    for (int i=0; karakter[i] != '\0'; i++)
    {
        karakter1++;
    }
    return karakter1;
}

int main()
{
    setlocale(LC_ALL,"Turkish");

    char isim[]= "murat karakurt";

    /*printf("Lutfen bir giris yapınız: ");
    gets(&isim);*/

    printf("dizinin uzunlugu = %d\n",diziuzunlu(isim));
    printf("strlen = %d\n",strlen(isim));


    return 0;
}
