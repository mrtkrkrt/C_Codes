#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
 int kareninbirkenari;
 printf("lutfen karenin bir kenarýný cm cinsinden giriniz\n");
 scanf("%d",&kareninbirkenari);


 int dikdortgeninkisakenari,dikdortgeninuzunkenari;
/* printf("lütfen dikdörtgenin kýsa kenarýný cm cinsinden yazýnýz...\n");
 scanf("%d",&dikdortgeninkisakenari);
 printf("lütfen dikdörtgenin uzun kenarýný yazýn\n");
 scanf("%d",&dikdortgeninuzunkenari);*/
 printf("dikdortgenin kisa ve uzun kenarini girin.\n");
 scanf("%d%d",&dikdortgeninkisakenari,&dikdortgeninuzunkenari);

 int alan=dikdortgeninkisakenari * dikdortgeninuzunkenari;

 printf("karenin alaný: %d cm\n",kareninbirkenari*kareninbirkenari);
 printf("dikdörtgenin alaný: %d cm\n", alan);


    return 0;
}
