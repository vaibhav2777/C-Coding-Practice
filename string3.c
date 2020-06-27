#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    char s2[20];
    char r[]= " is a friend of";
    printf("Enter first string:\n");
    gets(s1);
    printf("Enter second string:\n");
    gets(s2);
    
    puts(strcpy(s2, strcat(s1,r)));
    
    return 0;
}