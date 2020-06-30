#include <stdio.h>
#include <string.h>
union student {
    int id;
    int marks;
    char fav_char;
    char name[50];
};

int main()
{
    union student s1;
    s1.id = 1;
    s1.marks = 84;
    s1.fav_char = 'u';
    strcpy(s1.name, "Harry");

    /*  s1.id= 1;
    s1.marks=84;
    strcpy(s1.name,"Harry");
    s1.fav_char='u';

    OUTPUT-> u
*/

    printf("ID = %d\n", s1.id);
    printf("Marks = %d\n", s1.marks);
    printf("Fav_char = %c\n", s1.fav_char);
    printf("Name = %s\n", s1.name);
    return 0;
}