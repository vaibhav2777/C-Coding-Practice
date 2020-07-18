#include <stdio.h>
int main()
{
    int a = 364;
    int *ptr; //this is a wild pointer
    //*ptr = 34; //this is not a good thing to do
    ptr = &a; //ptr is no longer a wild pointer
    printf("The valiue of a is %d\n", *ptr);

    return 0;
}

/*In line 6, if we remove the comment and make the command to run, then it shows the nasty bugs as wild pointer do.
( *ptr = 34; )*/