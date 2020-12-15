#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b,c,diskriminant;

printf("ax^2 + bx +c seklinde verilmis olan 2. dereceden denklemin icin a,b,c degerlerini giriniz.\n");

printf("lutfen a degerini giriniz:");
scanf("%f",&a);

printf("lutfen b degerini giriniz:");
scanf("%f",&b);

printf("lutfen c degerini giriniz:");
scanf("%f",&c);


if (b*b-4*a*c<0){
    printf("denklemin reel koku bulunmamaktadir");
}

else if (b*b-4*a*c==0){
    printf("denklemin tek reel koku vardir..");
}

else {
    printf("denklemin iki reel koku vardir");
}
    return 0;
}
