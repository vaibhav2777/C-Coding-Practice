#include <stdio.h>
int main()
{
    float num, temp;

    printf("Two options:\n 1.°c to °F\n 2.°F to °c\nEnter your choice:");
    scanf("%f", &num);

    if (num == 1)
    {
        printf("Enter temperatue in °C:");
        scanf("%f", &temp);
        printf("Your temperature in °F: %f", (temp * 1.8) + 32);
    }
    else if (num == 2)
    {
        printf("Enter temperature in °F:");
        scanf("%f", &temp);
        printf("Your temperature in °C; %f", (temp - 32) / 1.8);
    }
    else
    {
        printf("Please make a valid choice, START AGAIN");
    }
    return 0;
}
