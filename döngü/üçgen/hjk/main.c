#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b,c;

   printf("lutfen kenar uzunluklarini girin:");
   scanf("%f %f %f",&a,&b,&c);

    printf("degerleri girilen ucgenin cevresi: %f\n",a+b+c);


     if ((a==b)&&(a==c)&&(b==c))
        printf("eskenar ucgen");

    else if ((a==b)&&(a!=c)&&(b!=c))
        printf("ikizkenar ucgen");

    else if ((a==c)&&(a!=b)&&(b!=c))
        printf("ikizkenar ucgen");

    else if ( (b==c)&&(b!=a)&&(c!=a))
        printf("ikizkenar ucgen");

    else if ((a!=b)&&(a!=c)&&(b!=c))
        printf("cesitkenar ucgen");


    return 0;
}
