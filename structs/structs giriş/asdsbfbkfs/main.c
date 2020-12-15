#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int sayi1,kalan1,sayac=0,x,y,z;

    printf("enter the number please! : \n");
    scanf("%d",&sayi1);

    while (sayi1>0){
        kalan1=sayi1%10;
        sayi1= (sayi1-kalan1)/10;
        sayac++;
    }
    printf("sayi %d basamaklidir\n",sayac);



 int sayi, gecici, sonuc=0, kalan;

    printf("Sayi Giriniz: ");
    scanf("%d", &sayi);

    gecici = sayi;

    while ( gecici > 0 ){

        kalan = gecici % 10;
        sonuc = sonuc * 10 + kalan;
        gecici /= 10;
    }

    printf ("%d'nin tersi= %d", sayi, sonuc);



    return 0;
}
