#include <stdio.h>
void changevalue(int *address)
{
    *address = 356874;
    return;
}
int main()
{
    int a = 5, b = 3;
    printf("The value of a is %d\n", a);
    changevalue(&a);
    printf("The value of a is now %d", a);
    return 0;
}