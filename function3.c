//Without argument and with return value
#include<stdio.h>
int takenumber()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    return x;
}
int main()
{
    int num;
    num = takenumber();
    printf("Entered number is %d", num);
    return 0;
}
