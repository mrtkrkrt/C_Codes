#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10;

    while (i<10){
        printf("%d\n",i);
        i++;
    }

    int a=10;
    printf("\n");

    do {
        printf("%d\n",a);
        a++;
    }
    while (a<10);

    return 0;
}
