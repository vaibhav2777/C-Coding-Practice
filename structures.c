#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
};

int main()
{
    struct student harry,ravi,shubham;
    harry.id=1;
    ravi.id=2;
    shubham.id=3;
    harry.marks=68;
    ravi.marks=45;
    shubham.marks=42;
    harry.fav_char='p';
    ravi.fav_char='p';
    shubham.fav_char='p';
    strcpy(harry.name, "Harry Potter student of the year.\n");
    printf("Harry got %d marks\n", harry.marks);
    printf("Harry have Id no. %d\n", harry.id);
    printf("Harry want %c as his favourite character.\n", harry.fav_char);
    printf("Harry's name is: %s\n", harry.name);
    
    return 0;
}