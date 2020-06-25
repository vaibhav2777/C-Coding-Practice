//With argument and without return value
#include<stdio.h>
void printstar(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%c", '*');
    }
    
}
int main()
{
    printstar(8);
    return 0;
}