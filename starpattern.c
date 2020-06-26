/* Take input from the user and ask user to choose 1 for triangular star pattern and 2 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern

*****
****
***
**
* -> Reversed triangular star pattern

*/
#include <stdio.h>
int main()
{
    int choice, n;
    printf("Enter you want star pattern of:\n1.Triangular star pattern.\n2.Reversed triangular star pattern.\n");
    printf("Enter you choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You have entered for triangular star pattern.\n");
        printf("Enter number of rows:\n");
        scanf("%d", &n);
        printf("Your star pattern is as follows:\n");
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                printf("*");
            printf("\n");
        }

        break;
    case 2:
        printf("You have entered for reversed triangular star pattern.\n");
        printf("Enter number of rows:\n");
        scanf("%d", &n);
        printf("Your star pattern is as follows:\n");
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
                printf("*");
            printf("\n");
        }

        break;
    default:
        printf("Enter a valid choice.");
        break;
    }
    return 0;
}
