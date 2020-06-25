#include<stdio.h>
int main()
{
    int marks[2]/*4*/[4]= {{4,5,8,7}, {8,6,4,7}};
    for (int i = 0; i < 2/*4*/; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", marks[i][j]);
        }
         printf("\n");
    }
    
    return 0;
}
/*output will of 4x4 matrices element.*/