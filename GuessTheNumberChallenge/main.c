#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed
/*
Purpose : generate a random number from 0 to 20
1. user should only be able to enter numbers from 0-20
2. The program will indicate entered number is too high or too low
3. The player win the game if he can guess within 5 times
4. show how many trials left when the player's guess wrong
*/
int main()
{

    time_t t;
    // initialization of random number generator
    srand((unsigned) time(&t));
    // get the random number
    int randomNumber = rand() % 21;
    int guessNum;
    int leftChances = 5;

    printf("%d", randomNumber);

    printf("Welcome to the guessing game\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");
    printf("\nYou have %d tries left\n", leftChances);

    // User enter guessing number until user put correctly 0-20
    while(1){
        if(leftChances == 0){
            printf("\nYou failed. The number was %d \n", randomNumber);
            break;
        }
        printf("\nPlease enter your guess between 0 to 20 : ");
        scanf("%d", &guessNum);
        if(guessNum < 0 || guessNum > 20){
                printf("I said you must entered only between 0 to 20\n");
                continue;
        }
        if(guessNum < randomNumber){
                leftChances--;
                printf("You have %d tries left\n", leftChances);
                printf("Sorry, %d is wrong. My number is bigger than that\n", guessNum);
        }else if(guessNum > randomNumber){
                leftChances--;
                printf("You have %d tries left\n", leftChances);
                printf("Sorry, %d is wrong. My number is smaller than that\n", guessNum);
        }else{
                printf("Congratulation! Your guess is correct!\n");
                break;
        }
    }
    return 0;
}
