#include <stdio.h>

int main() {
	
int p = 5, q =6, r = 7;
int* a[3];
a[0] = &p;
a[1] = &q;
a[2] = &r;

int **ptr = a;

printf("%d\n", **ptr);
printf("%p\n", a);
printf("%d", *a[0]);
printf("\n%p",&p);
printf("\n%p",a[0]);
}
