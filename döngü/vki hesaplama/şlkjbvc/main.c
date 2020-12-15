#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  kilo,boy,vki;

    printf("lutfen kilonuzu giriniz.\n");
    scanf("%f",&kilo);
    printf("lutfen boyunuzu giriniz.\n");
    scanf("%f",&boy);

    vki=kilo/(boy*boy);

    printf("vucut kitke endeksiniz: %f",vki);
    return 0;
}
