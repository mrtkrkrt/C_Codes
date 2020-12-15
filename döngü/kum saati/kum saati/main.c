#include<stdio.h>
#include<stdlib.h>
int main()
{
    int taban, sayac, x, y;
    printf("Taban sayisini giriniz(tek tamsayi): ");
    scanf("%d", &taban);
    for(sayac=(taban+1)/2; sayac>=1; sayac--)
    {
        for(x=1; x<=(taban+1)/2-sayac; x++)
        {
            printf(" ");
        }
        for(y=1; y<=2*sayac-1; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(sayac=2; sayac<=(taban+1)/2; sayac++)
    {
        for(x=1; x<=(taban+1)/2-sayac; x++)
        {
            printf(" ");
        }
        for(y=1; y<=2*sayac-1; y++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
