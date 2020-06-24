#include<stdio.h>
int main()
{
    int num, index=0;
    printf("Write the sequence of the numbers.\n Enter a num:\n", num);
    scanf("%d", &num);
    printf("Your result is shown below:\n");
    do
    {
        printf("%d\n", index);
        /* index+1 then the output will be 
        1
        2
        3
        4*/

        index=index+1;
    } while (index<num);
    
    return 0;
}
