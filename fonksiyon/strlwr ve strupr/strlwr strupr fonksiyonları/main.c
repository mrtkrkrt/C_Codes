#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    //strlwr kelimeyi k���k harfli yapar........strrupr buyuk harli yapar

    char kelime[20];

    printf("l�tfen kelime giriniz...\n");
    gets(kelime);

    printf("girdi�iniz oldu�unuz kelimenin k���k harflerle yaz�lm�� hali : %s\n",strlwr(kelime));
    printf("girmi� oldu�unuz kelimenin b�y�k harflerle yaz�lm�� hali : %s",strupr(kelime));
    return 0;
}
