#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int yas;

    printf("lutfen yasinizi \n");
    scanf("%d",&yas);

    if (yas>=18) {
        printf("resitsiniz\n");
        }

    else {
       printf("resit degilsiniz\n");*/


    int puan;

   printf("lutfen puaninizi girin\n");
   scanf("%d",&puan);



    if (puan>=80 && puan<=100)
    printf("puaniniz cok iyi");

    else if (puan<80 && puan>=60)
        printf("puaniniz iyi");

    else if (puan<60 && puan>=40)
        printf("puaniniz orta");

    else if (puan<40 && puan>=20)
        printf("puaniniz  kotu");

    else if (puan<20 && puan>=0)
        printf("puaniniz cok kotu");

    else
            printf("yanlis not girdiniz");








    return 0;
}
