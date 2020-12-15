#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char mekan[20] = "Eyfel kulesi";
    char ulke [6];

   // strcpy(ulke,mekan);        //ulke içindeki karakterlere mekan içindeki karakterleri kopyalýyo

    strncpy(ulke,mekan,5);            //burdada 5 karakteri tek kopyalýyo fakat ulke isimli dizinin boyutu oraya yazýlan sayýdan bir fazla olmak zournda

    int i=0;

    while(ulke [i] != '\0'){
        printf("%c",ulke[i]);
        i++;
    }

    //YADA

    printf("ulkede bulunanlaar: %s",ulke);


    return 0;
}
