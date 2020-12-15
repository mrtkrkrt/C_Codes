#include <stdio.h>
#include <stdlib.h>

int main()
{

    char karakter;

    printf("bana bir karakter soyle sana onun ASCII degerini soylim...\n");
    scanf("%c",&karakter);

    printf("%c ' in ASCII degeri:   %d\n",karakter,karakter);             //65-90 buyuk harfler tutuluyo,,,97-122 arasında kucuk harfler tutuluyor.

    int karakterinasciidegeri = karakter;

    if(karakterinasciidegeri>=65 && karakterinasciidegeri<=90){
        printf("%d buyuk bir harftir...\n",karakterinasciidegeri);

    }

    else if (karakterinasciidegeri>=97 && karakterinasciidegeri<=122){
         printf("%d kucuk bir harftir...\n",karakterinasciidegeri);

    }

    else {
        printf("lutfen a-z yada A-Z araliginda bir karakter girin.\a");
        //printf("%c %c %c %c %c",karakter,karakter,karakter,karakter,karakter);
    }
    return 0;
}
