#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int bassayisi (int sayi)
{
    int sayac=0;

    while (sayi>0)
    {
        sayi = sayi/10;
        sayac++;
    }

    return sayac;
}

void tersbul(int sayi)
{
    int x,y=0,z,t;
    for (int i=1; i<sayi; i++)
    {
        z=pow(10,i);
        t=pow(10,y);
        x=((sayi % z)/y);
        y++;
        printf("%d",x);
    }

}


int main()
{
    int sayi,sayac=0,a;

    printf("lutfen bir sayi gir \n");
    scanf("%d",&sayi);

    a=bassayisi(sayi);
    tersbul(a);

    return 0;
}
