#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;

    printf("lutfen deprem siddetini girin...\n");
    scanf("%f",& n);

    if (n<5.0 && n>0)
        printf("ufak veya hasarsiz....\n");


    else if (n>=5 && n<5.5)
        printf("az hasarli....\n");

    else if (n>=5.5 && n<6.5)
        printf("ciddi hasarli");

    else if (n>=6.5 && n<7.5)
        printf("felaket: evler ve binalar cokebilir...\n");

    else if (n>=7.5)
        printf("facia:butun yapilar yok olur");

    else
        printf("lutfen dogru bir deger giriniz...\a");

    return 0;
}
