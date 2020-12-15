#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int secim;
   float sayi1,sayi2;

   menu: printf("1.toplama\n2.cikarma\n3.bolme\n4.carpma\n5.karekok\n6.kuvvet..\n");
    printf("lutfen yapmak istediginiz islemi secin.\n");
    printf("lutfen cikmak icin -1 'e bassin.\n");
    scanf("%d",&secim);


    if(secim == -1){
        goto cikis;
    }

    if (secim>0 && secim<7)
           printf("lutfen iki sayi giriniz.\n");
           scanf("%f%f",&sayi1,&sayi2);


    switch(secim) {
    case 1:
        printf("toplam: %f\n",sayi1+sayi2);
        break;

    case 2:
        printf("cikarma: %f\n",sayi1-sayi2);
        break;

    case 3:
        printf("bolme: %f\n",sayi1/sayi2);
        break;

    case 4:
        printf("carpim: %f\n",sayi1*sayi2);
        break;

    case 5:
        printf("karekoku:  %f = %f\n ,  karekoku: %f = %f\n",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2));
        break;

    case 6:
        printf("%f uzeri %f = %f",sayi1,sayi2,pow(sayi1,sayi2));
        break;

    default :
        printf("lutfen 1-6 arasinda bir deger giriniz.\a");
        break;


    }
    goto menu;
    cikis: printf("gorusmek uzere...\n");
        return 0;


}
