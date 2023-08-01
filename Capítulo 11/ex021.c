#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret, guess;

    srand(time(NULL));
    secret = rand() % 101;
    printf("Can you guess the secret number: ");
    if(guess == secret)
    {
        printf("You guessed it! The secret number is %d.\n", secret);
        return(0);
    }
    if(guess != secret)
    {
        printf("Wrong! It was %d.\n", secret);
        return(1);
    }
}