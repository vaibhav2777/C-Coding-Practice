#include <stdio.h>
int main()
{
    printf("Let's learn about pointers.\n");
    int a = 76;
     /* int a= 76;
    printf("The value of a is %d\n", a);*/
    //This will make the same result(Without using the pointers) as printf("The value of a is %d\n", *ptra);
    int *ptra = &a;
    int *ptr2=NULL ;
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %x\n", ptra);
    printf("The address of some garbage is %p\n", ptr2);
    //%x is used to print number in hexadecimal.
   
    return 0;
}
