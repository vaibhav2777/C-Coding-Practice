#include <stdio.h>
int func1(int b1)
{
    static int myvar = 98;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    return 0;
}
int main()
{
    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    return 0;
}