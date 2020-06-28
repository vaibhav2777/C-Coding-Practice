#include <stdio.h>
int main()
{
    typedef int *intptr;
    intptr a, b;
    int c = 89;
    a = &c;
    b = &c;
    printf("Value of b is %d\n",b);
    printf("Value of a is %d\n",a);
    return 0;
}// NO error bcoz a and b both are pointers here.


/* int* a,b;
int c=89;
a=&c;
b=&c;  --------------------> SHOWS ERROR
b=c;---------------------> No error
*/