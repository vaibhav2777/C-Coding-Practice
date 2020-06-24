#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name:", name);
    scanf("%s", &name);
     int i,age;
     for ( i = 0; i < 10; i++)
     {
        printf("%d\n", i);
        printf("%s Enter your age:\n",name);
        scanf("%s", &age);
        if (age==10)
        {
            printf("Please enter your actual age:", age);
            scanf("%d", &age);
            break;
        }
        
     }
     
    return 0;
}
