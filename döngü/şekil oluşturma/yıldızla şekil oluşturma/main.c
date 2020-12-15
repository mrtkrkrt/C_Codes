#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi,satir,sutun;

    printf("lütfen bir sayý giriniz...\n");
    scanf("%d",&sayi);


    for (satir=1; satir<=sayi; satir++)
    {
        for (sutun=1; sutun<=satir; sutun++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (satir=1; satir<=sayi; satir++)
    {
        for (sutun=sayi-satir; sutun>=0; sutun--)
        {
            printf("*");

        }
        printf("\n");
    }



    return 0;
}
