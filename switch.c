#include<stdio.h>
int main()
{
    int age, marks;
    printf("Enter your age:\n", age);
    scanf("%d", &age);
    printf("Enter your marks:\n", marks);
    scanf("%d", &marks);
    switch (age)
    {
    case 3:
        printf("Age is 3.\n");
        switch (marks)
        {
        case 45:
            printf("You gain 45 marks.");
            break;
        
        default:
            break;
        }
        break;

    case 13:
        printf("Age is 13.\n");
        break;
    
    default:
        break;
    }    
    return 0;
}
