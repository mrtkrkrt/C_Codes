#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    /*int sayi;


    printf("kaça kadar 5in katlarýný basrtýralým...\n");
    printf("lütfen bir sayi giriniz..\n");
    scanf("%d",&sayi);

    if(sayi>=0){
        for (int i=0;i<=sayi;i+=5){
            printf("%d\n",i);
        }

    }
    else {
        for (int i=0;i>sayi;i-=5){
            printf("%d\n",i);
        }
    }*/

    int sayi,toplam=0;

    printf("lütfen bir sayý giriniz..\n");
    scanf("%d\n",&sayi);

    for (int i=0; i<=sayi; i++)
    {
        toplam+=i;
    }
    printf("%d\n",toplam);
    return 0;
}
