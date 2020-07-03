#include <stdio.h>
struct driver
{
    char name[100], route[100];
    int dlno, kms;

} d1, d2, d3;
int main()
{
    int choice;
    printf("ENTER THE DETAILS OF THE DRIVERS:\nChoose your option:\n1.Yes\n2.No\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the name of 1st driver:\n");
        scanf("%s", &d1.name);
        printf("Enter the name of 2nd driver:\n");
        scanf("%s", &d2.name);
        printf("Enter the name of 3rd driver:\n");
        scanf("%s", &d3.name);

        printf("Enter Driving license no. of 1st driver:\n");
        scanf("%d", &d1.dlno);
        printf("Enter Driving license no. of 2nd driver:\n");
        scanf("%d", &d2.dlno);
        printf("Enter Driving license no. of 3rd driver:\n");
        scanf("%d", &d3.dlno);

        printf("Enter route covered by 1st driver:\n");
        scanf("%s", &d1.route);
        printf("Enter route covered by 2nd driver:\n");
        scanf("%s", &d2.route);
        printf("Enter route covered by 3rd driver:\n");
        scanf("%s", &d3.route);

        printf("Enter KMs travelled by 1st driver:\n");
        scanf("%d", &d1.kms);
        printf("Enter KMs travelled by 2nd driver:\n");
        scanf("%d", &d2.kms);
        printf("Enter KMs travelled by 3rd driver:\n");
        scanf("%d", &d3.kms);

        printf("****Printing the drivers information:****\n");
        printf("The name of 1st driver is %s. His DL no. is %d. His route is for %s. He travelled %d Kms. \n", d1.name, d1.dlno, d1.route, d1.kms);
        printf("The name of 2nd driver is %s. His DL no. is %d. His route is for %s. He travelled %d Kms. \n", d2.name, d2.dlno, d2.route, d2.kms);
        printf("The name of 3rd driver is %s. His DL no. is %d. His route is for %s. He travelled %d Kms. \n", d3.name, d3.dlno, d3.route, d3.kms);
    }
    else if (choice == 2)
    {
        printf("You are not valid for accessing the information.");
    }
    else
    {
        printf("Please make a valid choice.");
    }

    return 0;
}