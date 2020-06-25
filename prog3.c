#include<stdio.h>
int main()
{
    int choice;
    float x;
    printf("Enter the conversion you want:\n 1. Kms to Miles\n 2. Inches to Foot\n 3. Cms to Inches\n 4. Pound to Kg\n 5. Inches to Meter.\n ");
    printf("Enter Your Choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter Distance in Kms:");
        scanf("%f", &x);
        printf("Required distance in Miles: %f", x*0.621371);
        break;

    case 2:
        printf("Enter Length in Inches:");
        scanf("%f", &x);
        printf("Required Length in Foot: %f", x*0.0833333);
        break;
    case 3:
        printf("Enter Length in Cms:");
        scanf("%f", &x);
        printf("Required Length in Inches: %f", x*0.393701);
        break;
    case 4:
        printf("Enter Weight in Pound:");
        scanf("%f", &x);
        printf("Required Weight in Kgs: %f", x*0.453592);
        break;
    case 5:
        printf("Enter Lenght in Inches:");
        scanf("%f", &x);
        printf("Required Length in Meter: %f", x*0.0254);
        break;
    
    default:
        printf("Please make a valid choice.");
        break;
    }
    return 0;
}
