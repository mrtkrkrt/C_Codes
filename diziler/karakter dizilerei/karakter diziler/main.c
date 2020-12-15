#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    //char isim[4]="cam";

    /*char isim[4]={'c','a','m','\0'};
    int i=0;

    for (i=0;i<4;i++){
        printf("%d. elamaný: %c\n",i,isim[i]);
        if (isim[i]=='\0'){
            printf("diziniz tamamlandý.\n");
        }
    }

*/


    /*char takimismi[]={'y','m','s','\0'};
    /*for (int i=0;i<3;i++){
        printf("%c ",takimismi[i]);
    }*/

   /* printf("%s",takimismi);
    printf("xxxxxxxxxxx");

    int sayilar[]={1,2,3,4,5,6,7,8,9,0};
    for (int i=0;i<10;i++){
        printf("%d",sayilar[i]);
    }

*/

    char ulkeler[7];

    for (int i=0;i<6;i++){
    printf("lütfen bir karakter dizisi girin:\n");
    scanf(" %c",&ulkeler[i]);
    }

    for (int i=0;i<10;i++){
        printf("%c\n",ulkeler[i]);
    }

    printf("girmiþ olduðunuz ülke: %s\n",ulkeler);

    return 0;
}
