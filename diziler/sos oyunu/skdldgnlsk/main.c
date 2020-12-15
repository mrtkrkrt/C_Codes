#include <stdio.h>
#include <stdlib.h>

void oyuncudan_giris_iste();
void ciz();

int main()
{
    int matrix [8][8];

    for (int i=0; i<8; i++)
    {
        for (int j=0; j<8; j++)
        {
            matrix[i][j]='.';
        }
    }

     int x,y;

    while (1)
    {

        printf("(x,y) : ");
        scanf("%d %d",&x,&y);

        if (x<0 || y<0 || y>8 || x>8)
        {
            printf("You entered wrong.");
        }

        else if (matrix[x][y]!='.')
        {
            printf("The place is full.");
        }

        else
        {
            printf("You entered  succesfully.\n");
            break;
        }
    }

    char character;

    printf("S\O : ");
    scanf(" %c",&character);


    matrix[x][y]=character;



     //system("cls");

    for (int i=0;i<8;i++){
        printf("%d ",i+1);

        for (int j=0;j<8;j++){
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}

/*void oyuncudan_giris_iste()
{

    int x,y;

    while (1)
    {

        printf("(x,y) : ");
        scanf("%d %d",&x,&y);

        if (x<0 || y<0 || y>8 || x>8)
        {
            printf("You entered wrong.");
        }

        else if (matrix[x][y]!='.')
        {
            printf("The place is full.");
        }

        else
        {
            break;
        }
    }

    char character;

    printf("S\O : ");
    scanf("%c",&character);


    matrix[x][y]=character;


}

void ciz(){

    system("cls");

    for (int i=0;i<8;i++){
        printf("%d ",i);

        for (int j=0;j<8;j++){
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }



}
*/
