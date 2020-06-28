#include<stdio.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
}std;
int main()
{
    std s1,s2;
    s1.id=59;
    s2.id=45;
    printf("Value of s1's Id is %d\n",s1.id);
    printf("Value of s2's Id is %d\n",s2.id);
    return 0;
}