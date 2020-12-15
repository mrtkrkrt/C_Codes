#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

float topla (float *sayi1,float *sayi2)
{

    return *sayi1 + *sayi2;
}

float cikarma(float *a,float*b)
{
    return *a-*b;
}
float bol(float *sa1,float *sa2)
{
    return (*sa1)/(*sa2);
}
float carp(float *c, float *d)
{
    return *c**d;
}

int main()
{
    setlocale(LC_ALL,"Turkish");

    float x,y;

    printf("Lütfen iki tane sayý giriniz : ");
    scanf("%f %f",&x,&y);

    printf("%f\n",topla(&x,&y));
    printf("%f\n",cikarma(&x,&y));
    printf("%f\n",carp(&x,&y));
    printf("%f\n",bol(&x,&y));


    return 0;
}
