#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");          //string == character arrays yani t�rk�e olarak katat deniyo

    /*char isim []="murat karakurt";

    printf("%d",strlen(isim));      //yaz�lan karakterlerin boyutunu yazd�r�yo  */


    char isim[15];

    printf("l�tfe bir kelime girinniz:n\");
    //scanf("%s",&isim);

    gets(isim);         //gets bo�luklar� al�yo ama scanf boslukalra kdar al�yo...



  /*  for (int i=0;i<uzunluk;i++){
        printf("%c",isim[i]);
    }

    printf("\n");

    for (int i=uzunluk-1;i>=0;i--){
        printf("%c",isim[i]);
    }
*/


    if (strlen(isim)>10){
            for (int i=0;i<strlen(isim);i++){
                printf("*");
            }
        printf("parolan�z olu�turuldu....");
    }

    else {
        printf("parola olu�tturma ba�ar�s�z...\n");
    }



    return 0;
}
