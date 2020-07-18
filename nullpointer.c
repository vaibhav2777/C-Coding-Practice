#include <stdio.h>
int main()
{
    int a = 35;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("The value of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be derefrenced.\n");
    }
    //  THE OTHER APPROACH....................
    int *ptr1 = &a;
    if (ptr1 != NULL)
    {
        printf("The value of a is %d\n", *ptr1);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be derefrenced.\n");
    }
    return 0;
}