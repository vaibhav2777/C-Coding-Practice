#include <stdio.h>
#include <stdlib.h>
int *functiondangling()
{
    int a, b, sum;
    a = 34;
    b = 85;
    sum = a + b;
    return &sum;
}
int main()
{
    //CASE 1: deallocation of memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 64;
    ptr[2] = 36;
    ptr[3] = 70;
    free(ptr); //ptr is now a dangling pointer

    //CASE 2: Function returning local variables address
    int *dandptr = functiondangling(); //danfptr is now a dangling pointer

    int *danglingptr3;
    //CASE 3: If a variable goes out of scope
    {
        int a = 12;
        danglingptr3 = &a;
    }
    //Here variable a, goes out of scope which means danglingptr3 is pointing to a locatiom which is freed and hence danglingptr3 is npow a dangling pointer.

    return 0;
}