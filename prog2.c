#include <stdio.h>
int main()
{
    float num;
    printf("Two options:\n 1.°c to °F\n 2.°F to °c\nEnter your choice:", num);
    scanf("%f", &num);
    if (num == 1)
    {
        printf("Enter temperatue in °C:", num);
        scanf("%f", &num);
        printf("Your temperature in °F: %f", (num * 1.8) + 32);
    }
    else if (num == 2)
    {
        printf("Enter temperature in °F:", num);
        scanf("%f", &num);
        printf("Your temperature in °C; %f", (num - 32) / 1.8);
    }
    else
    {
        printf("Please make a valid choice, START AGAIN");
        
    }
    return 0;
}
