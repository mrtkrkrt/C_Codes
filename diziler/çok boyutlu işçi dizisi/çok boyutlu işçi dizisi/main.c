#include <stdio.h>             //30 olmak zorunda
#include <stdlib.h>
#include<locale.h>

void isciisimleri(char isimlistesi[][30],int boyut){
    for (int i=0;i<boyut;i++){
        printf("%s\n",isimlistesi[i]);
    }


}

int main()
{
    setlocale(LC_ALL,"Turkish");

    char iscilistesi[5][30]={"haydar","burcu","abdurrahman","ayþe","halil ibrahiim göker"};

    isciisimleri(iscilistesi,5);

    return 0;
}
