#include <stdio.h>
#include <stdlib.h>     //s�f�rr celcius otuz iki fahrenite e�ittir
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


    printf("Fahrenheite d�n��t�rmek istedi�iniz celcius de�erini giriniz: \n");
    scanf("%f",&celcius);

    printf("%f celcius %f fahrenheite e�ittir\n",celcius,fahrenheitdonus(celcius));


    float fahrenheit;


    printf("celciusa d�n��t�rmek istedi�iniz celcius de�erini giriniz: \n");
    scanf("%f",&fahrenheit);

    printf("%f fahrenheit %f celciusa e�ittir\n",fahrenheit,celciusdonud(fahrenheit));*/


    for (int i=32;i<=212;i++){
        printf("%d fahrenheit %f celciusa e�ittir\n",i,celciusdonud(i));

    }

    for (int i=1;i<=100;i++){
        printf("%d celcius %f fahrenheite e�ittir\n",i,fahrenheitdonus(i));
    }



    return 0;
}
