#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    //For rock, paper, scissors - Returns 1 if c1>c2 and 0 otherwise.
    //If c1==c2 it will returnl -1
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar, name[25];
    ;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock, Paper, Scissors\n");
    printf("Enter Your Name:");
    scanf("%s", name);

    for (int i = 0; i < 1; i++)
    {
        //Take player's input
        printf("%s's Turn:\n", name);
        printf("Choose:\n1 for Rock\n2 for Paper\n3 for Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("%s choose %c\n\n", name, playerchar);

        //Generate computer's input
        printf("Computer's Turn\n");
        printf("Choose:\n1 for Rock\n2 for Paper\n3 for Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU choose %c\n\n", compchar);

        //Compare the score
        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("CPU got it!\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
        }
        else
        {
            playerscore += 1;
            printf("%s : You got it!\n");
        }
        printf("%s: %d\nCPU: %d\n\n", name, playerscore, compscore);
    }

    if (playerscore > compscore)
    {
        printf("%s win the game\n", name);
    }
    else if (playerscore < compscore)
    {
        printf("CPU win the game\n");
    }
    else
    {
        printf("Its a draw\n");
    }

    return 0;
}