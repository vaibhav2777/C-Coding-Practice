/*NOTE: Enter the value of element in the terminal bye giving them space as like you do in the matrix
remember the rows and column of the matrix as described in the program*/
#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("ENTER THE FIRST MATRIX:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("Enter the %d %d element of first matrix:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("ENTER THE SECOND MATRIX:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //printf("Enter the %d %d element of second matrix:\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    //Calculate the result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][j] * b[i][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    //Print the resultant matrix
    printf("The resultant matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}