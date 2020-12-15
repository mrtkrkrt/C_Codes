#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  0-100 adet -> adet fiyati = 3 tl
    100-200 adet -> adet fiyati= 2.5 tl
    200-300 adet -> adet fiyati = 2tl
    300-400 adet -> adet fiyati=1.25 tl
    400- ... adet -> adet fiyati = 0.75 tl
    */


    int adet ;
    float adetfiyati;

    printf("kac adet urun akacaksiniz?..\n");
    scanf("%d",&adet);

    if (adet>=400){
        adetfiyati=0.75;
    }
    else if (adet<400 && adet>=300){
        adetfiyati=1.25;
    }
    else if (adet<300 && adet>=200){
        adetfiyati=2;
    }
    else if (adet<200 && adet>=100){
        adetfiyati=2.5;
    }
    else if (adet<100 && adet>0){
        adetfiyati=3;
    }
    else {
    printf("lutfen bir veya birden buyuk bir sayi giriniz sayi giriniz...\n\a");
    }


    float toplamtutar = adet*adetfiyati;
    int toplamtutaryuvarlama = toplamtutar;
    float yapilanindirim=toplamtutar-toplamtutaryuvarlama;

    printf("toplam tutar: %f  yapilan indirim: %f  odemniz gerken tutar: %d",toplamtutar,yapilanindirim,toplamtutaryuvarlama);













return 0;
}
