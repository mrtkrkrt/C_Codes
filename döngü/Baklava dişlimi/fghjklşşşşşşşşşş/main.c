#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i,j,x;

    printf("Baklava diliminin kose uzunlugunu giriniz:");
    scanf("%d",&x);

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=x-i; j++)
        {
            printf(" ");
        }

        for(j=x; j>=x+1-i; j--)
        {
            printf("*");
        }

        for(j=x+1; j<=i+x-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }


    for(i=2; i<=x; i++)
    {
        for(j=x; j>x+1-i; j--)
        {
            printf(" ");
        }

        for(j=1; j<=x+1-i; j++)
        {
            printf("*");
        }

        for(j=1; j<x+1-i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
