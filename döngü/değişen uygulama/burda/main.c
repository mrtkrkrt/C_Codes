#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   setlocale(LC_ALL,"Turkish");

   int sayi;
   float kesirlisayi;
   double kesirlisayi2;
   char karakter;
   char karakterdizisi [5] ;

   printf("lütfen bir integer deðer giriniz...\n");
    scanf("%d",&sayi);

   printf("lütfen bir float deðer giriniz...\n");
    scanf("%f",&kesirlisayi);

    printf("lütfen bir double deðer giriniz...\n");
    scanf("%lf",&kesirlisayi2);

    printf("lütfen bir karakter deðer giriniz...\n");
    scanf(" %c",&karakter);

    printf("lütfen bir 4 karakter deðer giriniz...\n");
    scanf("%s",&karakterdizisi);        // baþýndaki & olmasada olur

    printf("girdiðiniz sayý; %d\n",sayi);
    printf("girdiðiniz sayý; %f\n",kesirlisayi);
    printf("girdiðiniz sayý; %lf\n",kesirlisayi2);  //long floatolamsad çalýþýr
    printf("girdiðiniz sayý; %c\n",karakter);
    printf("girdiðiniz sayý; %s\n",karakterdizisi);





















    return 0;
}
