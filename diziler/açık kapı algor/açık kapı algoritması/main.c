#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");             //c proglamlama dilinde vo� de�er s�f�rd�r ..

    int acik[10]={0};
    int tur,kapi;

    for (tur =0; tur<10; tur++)
    {
        for (kapi=tur; kapi<10; kapi=kapi+tur+1)
        {
            acik[kapi]= !acik[kapi];
        }
    }

    printf("A��k kap�lar�m��z:\n");
    for (kapi=0; kapi<10; kapi++)
    {
        if (acik[kapi])
        {
            printf("%d ",kapi+1);
        }

    }

    return 0;
}
