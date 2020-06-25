//With arguments and with return value
#include<stdio.h>
int sub(int x, int y)
{
    return y-x;
}
int mul(int x, int y)
{
    return x*y;
}
int add(int x, int y)
{
    return x+y;
}
int main()
{
    int a,b,c,d,e,f,g,h,i;
    a=47;   
    d=85; 
    b=52;   
    e=4;   
    g=8;
    h=2;
    i= add(g,h);
    c= sub(a,b);
    f= mul(d,e);
    printf("The Sub is: %d\n", c);
    printf("The mul is: %d\n", f);
    printf("The add is: %d\n", i);
    return 0;
}
