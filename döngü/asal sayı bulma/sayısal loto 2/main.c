#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

   /* int loto[49]={0};

    for (int i=0;i<49;i++){
        printf("%d",loto[i]);
    }*/


    int rastgelesayi = rand();
    srand(time(NULL));

    return 0;
}
