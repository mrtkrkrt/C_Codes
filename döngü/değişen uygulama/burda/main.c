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

   printf("l�tfen bir integer de�er giriniz...\n");
    scanf("%d",&sayi);

   printf("l�tfen bir float de�er giriniz...\n");
    scanf("%f",&kesirlisayi);

    printf("l�tfen bir double de�er giriniz...\n");
    scanf("%lf",&kesirlisayi2);

    printf("l�tfen bir karakter de�er giriniz...\n");
    scanf(" %c",&karakter);

    printf("l�tfen bir 4 karakter de�er giriniz...\n");
    scanf("%s",&karakterdizisi);        // ba��ndaki & olmasada olur

    printf("girdi�iniz say�; %d\n",sayi);
    printf("girdi�iniz say�; %f\n",kesirlisayi);
    printf("girdi�iniz say�; %lf\n",kesirlisayi2);  //long floatolamsad �al���r
    printf("girdi�iniz say�; %c\n",karakter);
    printf("girdi�iniz say�; %s\n",karakterdizisi);





















    return 0;
}
