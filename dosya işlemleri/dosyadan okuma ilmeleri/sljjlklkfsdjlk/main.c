#include <stdio.h>
#include <stdlib.h>

int main()                 //fgetch dosyadan karaaskter getiriyo
{
    FILE *dosya;            //EOF end of file dosyan�n sonu demek ve karakterlerin sonunu g�sterir . ama FEOF mkarakter diizlerinin bitti�ini g�steriyo

    char karakter,karak[50],kelmele[50][50],urunismi[50][20];  //ba��nda f varsa dosyaya yoksa ekrna bast�r�yo
    char urunulke[50][20];
    int i=0;
    int stok[50];

    if ((dosya=fopen("C:\\Users\\excalibur\\Desktop\\c denemeler\\dosya i�lemleri\\yazilar.txt","r"))!=NULL)
    {

        /*karakter=fgetc(dosya);   //karakter karakter alma
        while (karakter != EOF){
            printf("%c",karakter);
            karakter=fgetc(dosya);
        }*/

        /* fgets(karak,50,dosya);         //49 karakter art� bir tane \0 koyuyo
         puts(karak);*/

       /* while(!feof(dosya))  //kelime kelime alma
        {
            fscanf(dosya,"%s",&kelmele[i]);
            printf("%s\n",kelmele[i]);
            i++;

        }
*/

    while(!feof(dosya)){
        fscanf(dosya,"%s %d %s",&urunismi[i],&stok[i],&urunulke[i]);
        i++;

    }

    for (int j=0;j<i;j++){
        printf("%d. urun   \t\t %s %d %s\n",j+1,&urunismi[j],&stok[j],urunulke[j]);
    }



    }

    else
    {
        printf("Dosya bulunamadi...");

    }

    fclose(dosya);
    return 0;
}
