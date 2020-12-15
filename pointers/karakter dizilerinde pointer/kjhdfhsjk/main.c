#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

   /* char *takimlar[]={"Malatyaspor","Bursaspor","Beþiktaþ","Trabzonspor"};     //bu iki kelimeni   ram de tutulduðu gözþerin baþlangýç numaralarý tutuluyor...

    for (int i=0;takimlar[i]!='\0';i++){
        printf("%s\n",*(takimlar+i));
    }*/                                                             // 10->A   11->B   12-> C   13->D   14->E   15->F   HEXADESÝMAL DE ALIYORUZ %X YAZINCA ARTILI BÝÞEY YAZARDSAK BBUNA GÖRE TOPLUYORUZ

    char ulkeler[5][20];


    for (int i=0;i<5;i++){
        printf("%d . ülkeyi giriniz: ",i+1);
        scanf("%s",ulkeler[i]);

    }

    for (int i=0;i<5;i++){
        printf("%s\n",ulkeler[i]);
    }


    char *ulkelerinadresi[5];

    for (int i=0;i<5;i++){
        ulkelerinadresi[i] = &ulkeler[i];
    }

    for (int i=0;i<5;i++){
        printf("%s\n",*(ulkelerinadresi+i));

    }



    return 0;
}
