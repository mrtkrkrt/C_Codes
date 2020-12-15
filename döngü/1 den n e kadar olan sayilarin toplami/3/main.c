#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sayi1,sayi2,toplam=0,buyuk,kucuk;

    printf("kacla kac arasindaki sayilari toplayalim? lutfen 2 sayi giriniz:\n");
    scanf("%d%d",&sayi1,&sayi2);


    int terimsayisi;

    terimsayisi=abs(sayi1-sayi2)+1;
    printf("terim sayisi: %d\n",terimsayisi);

    if (sayi2>sayi1){
            buyuk=sayi2;
            kucuk=sayi1;

        while(terimsayisi>0){
            printf("%d\n",sayi1);
            toplam+=sayi1;
            sayi1++;
            terimsayisi--;

        }
    }

    else if(sayi2<=sayi1){
            buyuk=sayi1;
            kucuk=sayi2;
        while(terimsayisi>0){
            printf("%d\n",sayi2);
            toplam += sayi2;
            sayi2++;
            terimsayisi--;



        }

    }
    printf("%d'den %d'ye kadar olan sayilarin toplami= %d",buyuk,kucuk,toplam);
    return 0;
}
