#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    // sttrev(murat) yazarsam bana tarum ��kt�s�n� vericek... yani kelmenin tersini veriyo

    char kelime[20];
    char kelimenintersi[20];

    printf("l�tfen bir kelime giriniz ...\n");
    gets(kelime);           //kelimenin tersi kendisine e�it ise palindrom kelimedir...

    strcpy(kelimenintersi,kelime);
    strrev(kelimenintersi);

    printf("girmi� oldu�unuz kelime : %s\n",kelime);
    printf("girmi� oldu�unuz kelimenin tersi: %s\n",kelimenintersi);

    if (strcmp(kelime,kelimenintersi)==0){
        printf("girmi� oldu�unuz kelime palindrom bir kelimedir...");
    }

    else {
        printf("girmi� oldu�unuz kelime palindrom kelime de�ildir.....");
    }
    return 0;
}
