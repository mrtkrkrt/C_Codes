#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  kilo,boy,vki;
    char cinsiyet;

    printf("lutfen kilonuzu(kg),boyunuzu(m) ve cinsiyetinizi (e,E/k,K) giriniz:");
    scanf("%f %f %c",&kilo,&boy,&cinsiyet);

    vki=kilo/(boy*boy);
    printf("--------------------------\n");

    printf("vucut kitke endeksiniz: %f\n",vki);

    if (cinsiyet=='e' || cinsiyet=='E'){
        if (vki>0 && vki<20.7){
            printf("zayifsiniz. Saglik riski!");
        }

        if (vki>=20.7 && vki<26.4){
            printf("normalsiniz. Risk yoktur.");
        }

        if (vki>=26.4 && vki<31.1){
            printf("sismanlik sinirinda veya sismansiniz.riskli!");
        }

        if (vki>=31.1){
            printf("obezite .ciddi dercede riskli");
        }
    }

        if (cinsiyet=='k' || cinsiyet=='K'){
        if (vki>0 && vki<19.1){
            printf("zayifsiniz. Saglik riski!");
        }

        if (vki>=19.1 && vki<25.8){
            printf("normalsiniz. Risk yoktur.");
        }

        if (vki>=25.8 && vki<32.2){
            printf("sismanlik sinirinda veya sismansiniz.riskli!");
        }

        if (vki>=32.2){
            printf("obezite .ciddi dercede riskli");
        }
    }


    return 0;
}
