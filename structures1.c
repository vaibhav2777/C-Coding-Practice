#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
};
/*
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
}harry,ravi,shubham;
*///------------------------------------------> CAN ALSO BE DONE AS THIS
struct student harry, ravi, shubham;
void print()
{
    printf("%s", harry.name);
}

int main()
{
    strcpy(harry.name, "Harry Potter student of the year.\n");
    print();
    return 0;
}