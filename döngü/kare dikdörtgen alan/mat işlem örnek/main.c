#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
 int kareninbirkenari;
 printf("lutfen karenin bir kenar�n� cm cinsinden giriniz\n");
 scanf("%d",&kareninbirkenari);


 int dikdortgeninkisakenari,dikdortgeninuzunkenari;
/* printf("l�tfen dikd�rtgenin k�sa kenar�n� cm cinsinden yaz�n�z...\n");
 scanf("%d",&dikdortgeninkisakenari);
 printf("l�tfen dikd�rtgenin uzun kenar�n� yaz�n\n");
 scanf("%d",&dikdortgeninuzunkenari);*/
 printf("dikdortgenin kisa ve uzun kenarini girin.\n");
 scanf("%d%d",&dikdortgeninkisakenari,&dikdortgeninuzunkenari);

 int alan=dikdortgeninkisakenari * dikdortgeninuzunkenari;

 printf("karenin alan�: %d cm\n",kareninbirkenari*kareninbirkenari);
 printf("dikd�rtgenin alan�: %d cm\n", alan);


    return 0;
}
