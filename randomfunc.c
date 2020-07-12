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
    printf("The Random Number between 0 to 5 is %d\n", generateRandomNumber(5));
    return 0;
}