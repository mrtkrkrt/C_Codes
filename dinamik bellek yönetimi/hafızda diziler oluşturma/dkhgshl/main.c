#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char** cokboyutdizi;

    cokboyutdizi = malloc(sizeof(char*)*3);

    for (int i=0;i<3;i++){
        cokboyutdizi[i]=malloc(10*sizeof(char));

    }

    cokboyutdizi[0] = "kaan";
    cokboyutdizi[1]="academy";
    cokboyutdizi[2]="hosgeldin";

    for(int i=0;i<3;i++){
        printf("%s\n",cokboyutdizi[i]);
    }

    return 0;
}
