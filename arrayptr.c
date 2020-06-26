#include<stdio.h>
int main()
{
    int arr[] = {311,52,3,1,40};
    //int* arrptr = arr;
    printf("The value at position 3 of array is %d\n", arr[2]);
    printf("The address of 1st element of array is %d\n", &arr[0]);
    printf("The address of 1st element of array is %d\n", arr);
    printf("The address of 2nd element of array is %d\n", &arr[1]);
    printf("The address of 2nd element of array is %d\n", arr+1);
    printf("The address of 3rd element of array is %d\n", &arr[2]);
    printf("The address of 3rd element of array is %d\n", arr+2);

    printf("\n");
    //arr--; // this line will show error.
    //instead we can write arrptr++; or arrptr--;

    printf("The value at address of 1st element is %d\n", *(&arr[0]));
    printf("The value at address of 1st element is %d\n", arr[0]);
    printf("The value at address of 1st element is %d\n", *(arr));
    printf("The value at address of 2nd element is %d\n", *(&arr[1]));
    printf("The value at address of 2nd element is %d\n", arr[1]);
    printf("The value at address of 2nd element is %d\n", *(arr + 1));
    return 0;
}