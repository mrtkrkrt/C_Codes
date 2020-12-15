#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("lütfen bir sayý giriniz:");
    scanf("%d",&sayi);

    for (int i=0;i<sayi;i++){
        for (int j=1;j<=sayi*2-2;j++){
            printf(" ");
        }
        printf("\n");
        for (int k=1;k<=sayi-1
        ;k++){
            printf("*");
        }

    }


    return 0;
}
