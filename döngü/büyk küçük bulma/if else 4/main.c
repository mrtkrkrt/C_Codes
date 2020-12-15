#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi1,sayi2,sayi3,kucuk,buyuk,toplam,ortalama,carpim;

    printf("lutfen 3 farkli tamsayi girin.\n");
    scanf("%f%f%f",&sayi1,&sayi2,&sayi3);

    toplam = sayi1 + sayi2 + sayi3;
    ortalama = toplam /  3;
    carpim = sayi1 * sayi2 * sayi3;


    kucuk = sayi1;

    if(sayi2<kucuk){
        kucuk=sayi2;
    }

    if (sayi3<sayi2){
        kucuk=sayi3;
    }

    buyuk = sayi1;

    if(sayi2>sayi1){
        buyuk=sayi2;
    }

    if(sayi3>buyuk){
        buyuk=sayi3;
    }


    printf("toplam: %.2f \ncarpma: %.2f \nortalama: %.2f\n",toplam,carpim,ortalama);
    printf("kucuk sayi = %.0f\n",kucuk);
    printf("buyuk sayi= %.0f",buyuk);
    return 0;
}
