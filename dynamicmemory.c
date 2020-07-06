#include <stdio.h>
#include <stdlib.h>
int main()
{
    // USE OF MALLOC
    int *ptr;
    int n;
    printf("Enter the size of array you want to create.\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    // USE OF CALLOC
    /* int *ptr;
    int n; */
    printf("Enter the size of array you want to create.\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    // USE OF REALLOC
    /* int *ptr;
    int n; */
    printf("Enter the size of array you want to create.\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    //USE OF FREE
    free(ptr);

    return 0;
}