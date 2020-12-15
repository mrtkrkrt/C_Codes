#include <stdio.h>
#include <stdlib.h>     //sýfýrr celcius otuz iki fahrenite eþittir
#include<locale.h>        // fahreneit= celcius*1.8+32

float celciusdonud(int fahrenheit){
    return (fahrenheit-32)/1.8;

}

float fahrenheitdonus(int celcius){
    return celcius*1.8+32;

}



int main()
{
    setlocale(LC_ALL,"Turkish");

    /*float celcius;


    printf("Fahrenheite dönüþtürmek istediðiniz celcius deðerini giriniz: \n");
    scanf("%f",&celcius);

    printf("%f celcius %f fahrenheite eþittir\n",celcius,fahrenheitdonus(celcius));


    float fahrenheit;


    printf("celciusa dönüþtürmek istediðiniz celcius deðerini giriniz: \n");
    scanf("%f",&fahrenheit);

    printf("%f fahrenheit %f celciusa eþittir\n",fahrenheit,celciusdonud(fahrenheit));*/


    for (int i=32;i<=212;i++){
        printf("%d fahrenheit %f celciusa eþittir\n",i,celciusdonud(i));

    }

    for (int i=1;i<=100;i++){
        printf("%d celcius %f fahrenheite eþittir\n",i,fahrenheitdonus(i));
    }



    return 0;
}
