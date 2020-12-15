#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
    int basamaksayisi=0;
    int degerlertoplam=0;
    int gerceksayi=sayi;
    char devam='e';


    printf("lütfen sayý deðerlerinin toplanmasýný öðrenmek istediðiniz pozitif sayýyý girin...\n");
    scanf("%d",&sayi);

    while ( devam=='e' || devam=='E'){

    if(sayi>0){

    do{
        degerlertoplam+=sayi%10;
        basamaksayisi++;
        sayi=sayi/10;


    }while(sayi>0);
    printf("%d   %d basamaklýdýr ve basamaklarý toplamý: %d\n",gerceksayi,basamaksayisi,degerlertoplam);
    printf("devam etmek istemisiniz [E//e] ?\n");
    scanf(" %c",&devam);
    }

    else {
        printf("lütfen bir pozitif deger giriniz ...\n");
    }
    }
    return 0;
}

