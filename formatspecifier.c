#include <stdio.h>
int main()
{
    int a=5;
    float b= 5.28;
    char demo ='A';
    float x=1.999;
    printf("a= %d\n", a);/* Here %d is a format specifier which tells the compiler that 'a' variable 
contains interger value. */
    printf("%5.2f\n", b);  
    printf("Demo= %c\n", demo);
    printf("x= %f\n", x);
    
    return 0;
}
