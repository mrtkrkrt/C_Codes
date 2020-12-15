#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");          //string == character arrays yani türkçe olarak katat deniyo

    /*char isim []="murat karakurt";

    printf("%d",strlen(isim));      //yazýlan karakterlerin boyutunu yazdýrýyo  */


    char isim[15];

    printf("lütfe bir kelime girinniz:n\");
    //scanf("%s",&isim);

    gets(isim);         //gets boþluklarý alýyo ama scanf boslukalra kdar alýyo...



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
        printf("parolanýz oluþturuldu....");
    }

    else {
        printf("parola oluþtturma baþarýsýz...\n");
    }



    return 0;
}
