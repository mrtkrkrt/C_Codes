#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define pi 3.14


int main()
{
    setlocale(LC_ALL,"Turkish");



    /*float pi=3.14;
    float cemberinyaricapi;

    printf("lutfen cemberin yaricapini girin...\n");
    scanf("%f",&cemberinyaricapi);

    printf("çemberin alani: %.2f\n",pi*cemberinyaricapi*cemberinyaricapi);

    printf("cemberin cevresi %.2f\n",pi*cemberinyaricapi*2);*/


    float kupbirkenari;
    printf("kup kenar söyleyin\n");
    scanf("%f",&kupbirkenari);
    float yanalalanlarintoplami = 6*kupbirkenari*kupbirkenari;
    float kupunhacmi = kupbirkenari*kupbirkenari*kupbirkenari;

    printf("kupun yanal alan toplamý  %.2f\n",yanalalanlarintoplami);
    printf("kupun hacmi: %.2f\n",kupunhacmi);


    return 0;
}
