#include <stdio.h>
void add(int *x, int *y)
{
    int z = *x + *y;
    printf("a + b = %d\n", z);
    return;
}
void sub(int *x, int *y)
{
    int z = *x - *y;
    printf("a - b = %d\n", z);
    return;
}
int main()
{
    int a = 10, b = 5;
    printf("The value of a is %d and the value of b is %d\n", a, b);
    printf("After applying function we get:\n");
    add(&a, &b);
    sub(&a, &b);
    return 0;
}