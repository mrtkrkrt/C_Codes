#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int asalmi(int sayi){

    for (int i=2;i<sayi;i++){
        if (sayi%i==0){
            return 0;
        }

    }

    return 1;


}


int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayac=0;

    for (int i=2;i<=1000;i++){
        if (asalmi(i)==1){
            printf("%d aal say�d�r.\n",i);
            sayac++;
        }
    }

    printf("1-1000 aras�nda %d tane asal say� vard�r",sayac);

    return 0;
}
