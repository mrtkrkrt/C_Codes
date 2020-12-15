#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    /*int x=1,y=1,z;

    printf("%d\n%d\n",x,y);
    for (int i=0; i<10; i++)
    {
        z=x+y;
        x=y;
        y=z;
        printf("%d\n",z);
    }*/

    int i;
    for (i=1;i<21;i++){
        printf("%d 'nin karekökü: %.2f\n",i,sqrt(i));
    }
    return 0;
}
