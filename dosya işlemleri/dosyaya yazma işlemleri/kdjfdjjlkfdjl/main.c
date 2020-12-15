#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosyaadres;

    dosyaadres = fopen("C:\\Users\\excalibur\\Desktop\\c denemeler\\dosya iþlemleri\\yazilar.txt","a");  // w koyarsan sürekli diðerini siler oyle yazar a koyarsan varolanýn içine ekliyo

 /*   fprintf(dosyaadres,"\n");

    fputc('K',dosyaadres);          // dosyaya karakter yazdýrýr
    fprintf(dosyaadres,"\n");
    fputs("murat karakurt",dosyaadres);*/

    /*char name [10];

    printf("enter the name please ...\n");
    gets(name);

    fprintf(dosyaadres,"my name is : %s",name);*/

    int number1,number2;

    printf("enter the 2 number please : ");
    scanf("%d %d",&number1,&number2);

    int plus=number1+number2;

    fprintf(dosyaadres,"girmis oldugunuz sayilar : ");
    fprintf(dosyaadres,"%d %d",number1,number2);
    fprintf(dosyaadres,"bu sayýlarin toplami : \n");
    fprintf(dosyaadres,"%d",plus);

    fclose(dosyaadres);

    return 0;

}
