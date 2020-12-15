#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[4][4];

    printf("Please enter the information of matrix : \n");

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d st line %d st column : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    /*printf("The matrix you entered : \n");

        for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }*/

    int counter=0;

    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (i>j){
                if (matrix[i][j]==matrix[j][i]){

                }

                else {
                    counter++;
                }
            }

        }
    }

    if (counter!=0){
        printf("The matrix who you entered is not symmetrical.");
    }

    else{
        printf("The matrix who you entered is symmetrical");
    }


    return 0;
}
