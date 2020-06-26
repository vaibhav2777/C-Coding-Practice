//PASSING ARRAY TO A FUNCTION
#include <stdio.h>
void func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 382; //If you change any value here, it gets reflected in main()
    printf("\n");
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]); //Also give same value on *(ptr+i)
    }
    *(ptr + 2) = 546531;
    printf("\n");
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[] = {23, 13, 3, 4};
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n", arr[0]);

    func2(arr);
    func2(arr);

    int arr1[][2] = {{2, 13}, {9, 3}};
    func3(arr1);
    return 0;
}