#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");


    /*int sayilar[] = {1,2,3,4,5,6,7,8,9};

    for (int i=0;i<9;i++){
        printf("yazdýrdýðýnýz kümedeki %d. eleman = %d\n",i+1,sayilar[i]);
    }*/



    /*float sayilar[]= {1.5,4.8,5.78,2.0,9.3,6.1};

    for (int i=0; i<6; i++)
    {
        printf("%.2f\n",sayilar[i]);
    }
*/


    float sayilar[7]= {};

    for (int i=0; i<7; i++)
    {
        printf("%d. elemaný giriniz...\n",i+1);
        scanf("%f",&sayilar[i]);
    }

    for (int i=0; i<7; i++)
    {
        printf("%.2f ",sayilar[i]);
    }

    return 0;
}
