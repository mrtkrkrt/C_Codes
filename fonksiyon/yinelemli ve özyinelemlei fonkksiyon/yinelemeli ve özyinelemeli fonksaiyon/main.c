#include <stdio.h>
#include<locale.h>
#include <stdlib.h>

int faktoriyel(int sayi){
    int sonuc=1;

    for (int i=0;i<sayi;i++){
        sonuc= sonuc*(i+1);
    }

    return sonuc;
}

//içinde kendisini tekrar çaðýrdýðý için özyinelemli bir fonksiypndur.Fonksiyon içinde sayý kadar kendini  tekrar çaðýrýyo

int faktoriyelrekursif(int sayi){
    if (sayi<=1){
        return 1;
    }
    else {
        return sayi*faktoriyelrekursif(sayi-1);
    }

}

int main()
{
    setlocale(LC_ALL,"Turkish");


    printf("%d\n",faktoriyel(5));
    printf("%d\n",faktoriyelrekursif(5));


    return 0;
}
