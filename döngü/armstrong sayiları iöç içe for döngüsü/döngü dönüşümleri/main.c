#include <stdio.h>
main()
{
    int a,b,c, sayi1, sayi2, k=1;
    printf("Armstrong sayilari:\n");
    for(a=1; a<=9; a++)
        for(b=0; b<=9; b++)
            for(c=0; c<=9; c++)
            {
                sayi1 = 100*a + 10*b + c;
// sayi1 = abc (üç basamaklý)
                sayi2 = a*a*a + b*b*b + c*c*c;
// sayi2 = a^3+b^3+c^3
                if( sayi1==sayi2 )
                    printf("%d ", sayi1);
            }

    return 0;
}
