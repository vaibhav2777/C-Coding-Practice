#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //  srand takes seed as an input & is defined inside stdlib.h
    return rand() % n;
}
int main()
{
    printf("The Random Number between 0 to 100 is %d\n", generateRandomNumber(100));
    return 0;
}