#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    //strlwr kelimeyi küçük harfli yapar........strrupr buyuk harli yapar

    char kelime[20];

    printf("lütfen kelime giriniz...\n");
    gets(kelime);

    printf("girdiðiniz olduðunuz kelimenin küçük harflerle yazýlmýþ hali : %s\n",strlwr(kelime));
    printf("girmiþ olduðunuz kelimenin büyük harflerle yazýlmýþ hali : %s",strupr(kelime));
    return 0;
}
