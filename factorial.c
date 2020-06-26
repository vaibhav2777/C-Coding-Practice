#include <stdio.h>
double factorial(double x)
{

    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return (x * factorial(x - 1));
    }
}
int main()
{
    int num;
    printf("Enter a number you want factorial of:\n");
    scanf("%d", &num);
    printf("The factorial of %d is %lf\n", num, factorial(num));
    return 0;
}
