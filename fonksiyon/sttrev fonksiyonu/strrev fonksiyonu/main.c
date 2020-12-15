#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    // sttrev(murat) yazarsam bana tarum çýktýsýný vericek... yani kelmenin tersini veriyo

    char kelime[20];
    char kelimenintersi[20];

    printf("lütfen bir kelime giriniz ...\n");
    gets(kelime);           //kelimenin tersi kendisine eþit ise palindrom kelimedir...

    strcpy(kelimenintersi,kelime);
    strrev(kelimenintersi);

    printf("girmiþ olduðunuz kelime : %s\n",kelime);
    printf("girmiþ olduðunuz kelimenin tersi: %s\n",kelimenintersi);

    if (strcmp(kelime,kelimenintersi)==0){
        printf("girmiþ olduðunuz kelime palindrom bir kelimedir...");
    }

    else {
        printf("girmiþ olduðunuz kelime palindrom kelime deðildir.....");
    }
    return 0;
}
