#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char mekan[20] = "Eyfel kulesi";
    char ulke [6];

   // strcpy(ulke,mekan);        //ulke i�indeki karakterlere mekan i�indeki karakterleri kopyal�yo

    strncpy(ulke,mekan,5);            //burdada 5 karakteri tek kopyal�yo fakat ulke isimli dizinin boyutu oraya yaz�lan say�dan bir fazla olmak zournda

    int i=0;

    while(ulke [i] != '\0'){
        printf("%c",ulke[i]);
        i++;
    }

    //YADA

    printf("ulkede bulunanlaar: %s",ulke);


    return 0;
}
