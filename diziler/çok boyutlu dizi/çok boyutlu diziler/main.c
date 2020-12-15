#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    /*int cokboyutludizi[3][2]={1,2,3,4,5,6};   //birincisi satýrý ikincisi sütunu ifade ediyo...

    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            printf ("%d   ",cokboyutludizi[i][j]);
        }


    }
*/

    /*int satir,sutun;

    printf("kaç satýr istiyorsunuz?\n");
    scanf("%d",&satir);
    printf("kaç sütun istiyorsunuz?\n");
    scanf("%d",&sutun);

    int cokboyutludizi[satir][sutun];

    for (int i=0;i<satir;i++){
        for (int j=0;j<sutun;j++){
            printf("%d satýrýndaki %d sütunundaki elemaný giriniz...\n",i+1,j+1);
            scanf("%d",&cokboyutludizi[i][j]);
        }

    }

     for (int i=0;i<satir;i++){
        for (int j=0;j<sutun;j++){
            printf("%d   ",cokboyutludizi[i][j]);
        }
        printf("\n");
    }
*/


    int cokboyutludizi[2][2][2];

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int k=0;k<2;k++){
                printf("%d. %d. %d. elamaný giriniz",i+1,j+1,k+1);
                scanf("%d",&cokboyutludizi[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int k=0;k<2;k++){
                printf("%d. ",cokboyutludizi[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }





    return 0;
}
