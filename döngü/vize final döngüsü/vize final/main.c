#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arasinav,sonsinav,devampuani,ortalamapuani;
    while(1){
    menu : printf("arasinav puanini giriniz:\n");
    scanf("%f",&arasinav);
     if (arasinav==-1){
        goto cikis;
    }
    printf("son sinav puanini giriniz:\n");
    scanf("%f",&sonsinav);
    printf("devam puaninizi girin:\n");
    scanf("%f",&devampuani);

    ortalamapuani=arasinav*0.4+sonsinav*0.5+devampuani*0.1;
    printf("ortalama puanininiz: %.2f\n",ortalamapuani);

    if (arasinav==-1){
        goto cikis;
    }


    if (ortalamapuani<60 && ortalamapuani>0){
        printf("dersten kaldiniz.\n");
    }

    else if (ortalamapuani>=60){
        printf("tebrikler dersten gectiniz\n");
    }
    }
    cikis:

    return 0;

}
