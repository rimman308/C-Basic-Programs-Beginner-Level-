#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    /*
    1 ->Rock
    2 ->Paper
    3 ->Scissor
    0 ->
    */
    int player;
    int computer = (rand() % 3) + 1;

    // printf("Enter your option between 0 to 3\n");
    // scanf("%d",&player);

    do
    {
        printf("Enter your move \n");
        printf("1 for Rock , 2 for Paper , 3 for Scissor \n");
        printf("Enter your option \n");
        scanf("%d", &player);

        if (player == 0)
        {
            printf("Game exited. Thank you for playing!\n");
            break;
        }

        if (player < 1 || player > 3)
        {
            printf("Invalid choice. Please enter between 1 and 3.\n");
            continue;
        }
        if (player == computer)
        {
            printf(" Both are same\n");
        }
        else if (player == 1 && computer == 3 || player == 2 && computer == 1 || player == 3 && computer == 2)
        {
            printf("The player wins \n");
        }
        else
        {
            printf("The computer wins \n");
        }

    } while (player != 0);

    return 0;
}