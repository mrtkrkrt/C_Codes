#include <stdio.h>
#include <stdlib.h>

int main()
{
   //bunlar ramde depolanýyo. 1mb=1024 byte , 1gb=1024 mb,1byt=8bit

    int tam sayi = 6; //4 byte
    double buyk yer kaplayan kesirli sayi= 7.2;  //8 byte
   char karakter= 'k';  //1 byte

   float kesirli sayi= 7,2; //4 byte
 //  short int uzunluk;  //2 byte
   // long int;   //4 byte
  char karakterdizisi[12]="murat krkrt";     //10 byte
  char karakter dizisi ornegi[5]= {'m','u','r','a','t'};

    printf("%s",karakterdizisi);
    printf("%10d", tam sayi);   //basýnda ne  kadar bosluk býrakmasýný istiyoan o sayýyý yaz
    printf("%.2f",buyk yer kaplayan kesirli sayi);  // noktadan sonrakac basamak yazdýrcaksa o sayýyý yaz
    printf("%c",karakter);   // başında boşluk bırakabilirsin.
    printf("%s",karakterdizisi);
    printf("%f",kesirli sayi);

                                        // slash t yazarsan hepsinin arasýnda kafasýna gorey yer býrakýr
    printf("%d RAM'de %d byte yer kaplar",tam sayi,sizeof(int));  //ramde ne kadar yer kapladýgýný gösterir.
    printf("%d RAM'de %d byte yer kaplar",tam sayi,sizeof(float));
    printf("%d RAM'de %d byte yer kaplar",tam sayi,sizeof(char));
    printf("%d RAM'de %d byte yer kaplar",tam sayi,sizeof(double));






    return 0;
}
