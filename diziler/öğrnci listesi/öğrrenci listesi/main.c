#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    /* char ogrenci[4][20]= {"Kaan","Fatih","Hasan","Mert"};

     for (int i=0; i<4; i++)
     {


     }
    */

    char ogrenci[2][5][20];

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("%d. sýnýftaki %d. öðrencinin ismini giriniz: ",i+1,j+1);
            scanf("%s",&ogrenci[i][j]);
        }
    }


    for (int i=0; i<2; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("%d. sýnýftaki %d. öðrencinin ismi = %s \n",i+1,j+1,ogrenci[i][j]);

        }
    }




    return 0;
}
