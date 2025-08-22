#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // This program will generate a Random Number from 1-100:
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;

    int guessed = 0, attempts = 0;


    while (guessed != randomNumber)
    {
        printf("Guess a number: ");
        scanf("%d", &guessed);

        if (guessed == randomNumber)
        {
            attempts += 1;
            printf("Congrats Dude! \"%d\" was the Hidden Number!\n", guessed);
            printf("You Guessed in %d attempts", attempts);
            break;
        }
        else if (guessed > randomNumber)
        {
            attempts += 1;
            printf("Move Downwards!\n");
        }
        else if (guessed < randomNumber)
        {
            attempts += 1;
            printf("Move Upwards!\n");
        }
    }

    return 0;
}