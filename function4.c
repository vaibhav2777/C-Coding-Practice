//Without argument and without return value
#include<stdio.h>
void getnumber()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Entered number is %d", num);
}
int main()
{
    getnumber();
    return 0;
}