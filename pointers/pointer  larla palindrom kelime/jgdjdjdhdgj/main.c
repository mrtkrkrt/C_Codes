#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    char kelime[30];

    char *adres1;
    char *adres2;

    printf("L�tfen palindrom olup olmad���n� ��renmek istedi�iniz kelimeyi girin : ");
    gets(kelime);

    //puts (kelime);     //kelimeyi yazd�r�yo

    for (adres2=kelime;*adres2 != NULL;adres2++);
        for (adres1= kelime;adres1--;adres2>adres1){
            if (*adres2 == *adres1){
                adres2--;
                adres1++;
            }
            else {
                break;
            }


        }

        if (adres1<adres2){
            puts(kelime);
            printf("palindromdur\n");
        }
        else {
            puts(kelime);
            printf("palindrom de�ildir.\n");
        }
    return 0;
}
