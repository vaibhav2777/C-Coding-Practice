#include <stdio.h>

int main()
{

    int a = 52;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 2);
    printf("\n");
    char b = '3';
    char *ptrb = &b;
    printf("%d\n", ptrb);
    printf("%d\n", ptrb + 2);
    printf("\n");
    char c = '2';
    char *ptrc = &c;
    printf("%d\n",ptrc);
    ptrc++;
    printf("%d\n", ptrc);
    printf("%d\n", ptrc-2);
    printf("\n");
    return 0;
}