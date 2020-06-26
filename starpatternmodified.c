#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversedstarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Enter your choice:\n1.Triangular star pattern.\n2.Reversed triangular star pattern.\n");
    scanf("%d", &type);
    switch (type)
    {
    case 1:
        printf("How many rows do you want?\n");
        scanf("%d", &rows);
        starpattern(rows);
        break;

    case 2:
        printf("How many rows do you want?\n");
        scanf("%d", &rows);
        reversedstarpattern(rows);
        break;

    default:
        break;
    }
    return 0;
}