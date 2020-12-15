#include <stdio.h>
#include <stdlib.h>

int main()
{
   int girilensayi;
   float sayilar[100],toplam=0,ortalama;

   printf("lutfen kac tane sayinin ortalamasini almak istiyorsunuz...\n");
   scanf("%d",&girilensayi);

   while (girilensayi>100 || girilensayi<=0){
    printf("lutfen 1-100 arasinda bir deger giriniz...\n");
    printf("lutfen kac tane sayinin ortalamasini almak istiyorsunuz...\n");
    scanf("%f",&girilensayi);
   }

   for (int i=0;i<girilensayi;i++){
    printf("lutfen %d. sayýyý girin...\n",i+1);
    scanf("%f",&sayilar[i]);
    toplam += sayilar[i];
   }


   ortalama  =toplam / girilensayi;
   printf("girilen sayilarin toplami: %f\n",toplam);
   printf("girilen sayilarin ortlamasi: %f\n",ortalama);
    return 0;
}
