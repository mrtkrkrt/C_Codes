#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");             //c proglamlama dilinde voþ deðer sýfýrdýr ..

    int acik[10]={0};
    int tur,kapi;

    for (tur =0; tur<10; tur++)
    {
        for (kapi=tur; kapi<10; kapi=kapi+tur+1)
        {
            acik[kapi]= !acik[kapi];
        }
    }

    printf("Açýk kapýlarýmýýz:\n");
    for (kapi=0; kapi<10; kapi++)
    {
        if (acik[kapi])
        {
            printf("%d ",kapi+1);
        }

    }

    return 0;
}
