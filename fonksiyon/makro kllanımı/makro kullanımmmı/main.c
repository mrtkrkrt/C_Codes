#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

#define enbuyuksayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1 : sayi2

#define saatisole(karakter) (karakter=='e'|| karakter =='E') ?  __TIME__ : "kullanýcý saati öðrenmek istemiyor"

#define sayilaritopla(sayi1,sayi2)  (sayi1+sayi2)

#define sayikarakter(karakter) (karakter=='k') ? karakter : 5

int main()
{
    setlocale(LC_ALL,"Turkish");

    printf("%d",enbuyuksayi(5,7));
    printf("\n");

    char karakter;
    printf("saati öðrenmek istiyormusunuz?\n");
    scanf("%c",&karakter);

    if (saatisole(karakter))
    {
        printf("%s",saatisole(karakter));
    }

    else
    {
        printf("%s",saatisole(karakter));
    }

    printf("\n");

    printf("%f",sayilaritopla(5.4,8.0));



    return 0;
}
