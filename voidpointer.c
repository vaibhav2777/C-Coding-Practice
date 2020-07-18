#include <stdio.h>
int main()
{
    int a = 365;
    float b = 8.352;
    void *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("The value of a is %d\n", *((int *)ptr1));
    printf("The value of b is %f\n", *((float *)ptr2));
    return 0;
}