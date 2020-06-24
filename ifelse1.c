#include<stdio.h>
int main()
{
    char name[20];
    int marks;
    printf("Enter your name:", name);
    scanf("%s", &name);
    printf("Enter your marks:", marks);
    scanf("%d", &marks);
    if (marks<33)
    {
        printf("You are fail.");
    }
    else if (marks==33)
    {
        printf("You just pass the exam");
    }
    
    else if (marks<=90)
    {
        printf("You are pass.");
    }
    else if (marks<=99)
    {
        printf("You are in top 10 students.");
    }
    else if(marks==100)
    {
        printf("You are the topper of the exam");
    }
    
    return 0;
}
