#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* float a,b,c,x;

 printf("sirasiyla a,b,c ve x  degerlerini girin.\a\n");
   scanf("%f%f%f%f",&a,&b,&c,&x);

   float sonuc = a*x*x + b*x + c;
    printf("denklemin sonucu:  %d",(int)sonuc);         //bunu yaparsan sadce tam kýsmýný gösterir
                                                        //float yaparsan ksirliyide gösterir

    */

    // int-> float -> double

     int x=30;
     float y=30 ;                   //float int den daha önemli, double floattan daha önemli oldugu için %d yazarsam sonuç vermez x ile y arasýnda
     double z=30;                   //eðer y ile z arasýnda iþlem yaparsam zaten  %f koycaðýmdan sýkýntý olmayacaktýr. long float da koysam sýkýntý olmaz.yani %lf

     printf("int/float %f\n");


     printf("%f",x/y);
    return 0;
}
