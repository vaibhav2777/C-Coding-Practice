#include<stdio.h>
int main()
{
    char name[20];
    int pass;
    printf("Enter your name:", name);
    scanf("%s", &name);
    printf("Welcome! %s\n", name);
    
    printf("Exam passed:\n 1.Maths\n 2.Science\n 3.Maths and science\n");
    printf("Enter your choice: ", pass);
    scanf("%d", &pass);
    
    if (pass==1)
    {
        printf("You have gift worth Rs.25");
    }
    else if (pass==2)
    {
        printf("You have gift worth Rs.15");
    }
    else if (pass==3)
    {
        printf("You have gift worth Rs.45");
    }
    else if (pass>3)
    {
        printf("Please enter a valid choice.");
    }
    
    return 0;
 }