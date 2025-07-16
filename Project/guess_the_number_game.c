#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int guess;
    int no_of_guess = 0;

    do
    {
        printf("Guess the number:\n");
        scanf("%d", &guess);
        no_of_guess++;
        if (guess > randomNumber)
        {
            printf("The number is lower\n");
        }
        else if (guess == randomNumber)
        {
            printf("You guessed right\n");
        }

        else
        {
            printf("The number is higher\n");
        }

    } while (guess != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guess);

    return 0;
}