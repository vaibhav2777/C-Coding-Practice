#include<stdio.h>
int main()
{
    int choice;
    printf("Enter your choice between 1 to 7:\n");
    scanf("%d", &choice);
    printf("You have selected %d as your choice\n", choice);
    switch (choice)
    {
    case 1:
        printf("Day is Monday\n");
        break;

    case 2:
        printf("Day is Tuesday\n");
        break;

    case 3:
        printf("Day is Wednesday\n");    
        break;

    case 4:
        printf("Day is Thursday\n");
        break;

    case 5:
        printf("Day is Friday\n");
        break;

    case 6:
        printf("Day is Saturday\n");
        break;

    case 7:
        printf("Day is Sunday\n");
        break;

    default:
        printf("Please Enter a valid choice.");
        break;
    }
    return 0;
}
