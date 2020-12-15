#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int secim;

     printf("lutfen seciminizi yapiniz...\n");
     printf("1.ilkbahar\n2.yaz\n3.sonbahar\n4.kis\n");
     scanf("%d",&secim);

     switch (secim){

             case 1: printf("hava cok guzel..."); break;             //break komutu switch case yapýsýný kesiyo ve döngüden çýkýyo.
             case 2: printf("hava cok sýcak ..."); break;
             case 3: printf("hava yagmurlu"); break;
             case 4: printf("hava karli"); break;
             default: printf("lutfen 1-4 arasinda bir deger giriniz...\a");

     }*/


    char karakteregoresecim;

    printf("karakter giriniz..\n");
    scanf("%c",&karakteregoresecim);

    do
    {
        for (int i=0; i<10; i++)
        {
            switch (karakteregoresecim)
            {

            case 'a' :
                printf("aliii...");
                break;
            case 'b' :
                printf("banuuuuu...");
                break;
            case 'c' :
                printf("cengizzzz...");
                break;
            default :
                printf("boyle birisiini tanimiyorum...");
                break ;
            }
        }

    }
    while (i<10);





    return 0;
}
