#include<stdio.h>
void printstr(char str[])
{
    int i=0;
    while (str[i]!=0)
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
void printstring(char string[])
{
    int i=0;
    while (string[i]!=0)
    {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[]={'h','a','r','r','y','\0'};
    char string[]="harry";
    char string1[34];
    printf("Using custom function:\n");
    printstr(str);
    printstring(str);
    printf("Using printf: %s\n", str);
    printf("Using puts:\n");
    puts(str);
    return 0;
}