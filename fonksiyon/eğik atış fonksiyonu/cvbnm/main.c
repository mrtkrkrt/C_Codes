#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>

float sure(float aci,float hiz);

float suree(float aci,float hiz){
    float sure1;
    sure1=( (sin(aci* M_PI/180)*hiz)/9.80)*2.0;


    return sure1;

}



int main()
{
    setlocale(LC_ALL,"Turkish");

    float hiiz;
    int sure1;

    printf("L�tfen ilk h�z� giriniz(m/s) : ");
    scanf("%f",&hiiz);

    printf("L�tfen a��y� giriniz(derece) : ");
    scanf("%d",&sure1);


    printf("-------------------------------------------------\n");
    printf("cisim %f saniye sonra yere d��er",suree(sure1,hiiz));







    return 0;
}
