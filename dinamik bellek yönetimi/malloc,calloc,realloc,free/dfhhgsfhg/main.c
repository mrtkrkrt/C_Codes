#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int *alan1 = malloc(10*sizeof(int));                    //malloc hafýzada yer ayýrýr.ayýrýlan gözlerde deðerler varsa onlarý korur

    int *alan2 =calloc(10,sizeof(int));                                 //calloc da o gözlerdekileri siler


    for (int i=0;i<10;i++){
        printf("alan1[%d] = %d   alan2[%d] = %d\n",i+1,alan1[i],i+1,alan2[i]);
    }

    alan1 = realloc(alan1,15*sizeof(int));    //yeniden boyutlandýrýyosun

    for (int i=0;i<15;i++){
        printf("alan1[%d] = %d\n",i+1,alan1[i]);
    }

    free(alan1);
    free(alan2);
    return 0;
}
