#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* float a,b,c,x;

 printf("sirasiyla a,b,c ve x  degerlerini girin.\a\n");
   scanf("%f%f%f%f",&a,&b,&c,&x);

   float sonuc = a*x*x + b*x + c;
    printf("denklemin sonucu:  %d",(int)sonuc);         //bunu yaparsan sadce tam k�sm�n� g�sterir
                                                        //float yaparsan ksirliyide g�sterir

    */

    // int-> float -> double

     int x=30;
     float y=30 ;                   //float int den daha �nemli, double floattan daha �nemli oldugu i�in %d yazarsam sonu� vermez x ile y aras�nda
     double z=30;                   //e�er y ile z aras�nda i�lem yaparsam zaten  %f koyca��mdan s�k�nt� olmayacakt�r. long float da koysam s�k�nt� olmaz.yani %lf

     printf("int/float %f\n");


     printf("%f",x/y);
    return 0;
}
