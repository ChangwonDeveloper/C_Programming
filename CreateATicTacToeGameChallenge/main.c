#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
/*
plays tic-tac-toe
    played on a 3*3 grid the game is played by two players, who take turns
you should create an array to represent the board
    can be of type char and consist of 10 elements (do not use zero)
    each element represents a coordinate on the board that the user can select
some functions that you should probably create
    checkForWin - checks to see if a player has won or the game is a draw
    drawBoard - redraws the board for each player turn
    markBoard sets the char arrays with a selection and check for an invalid selection
*/

char grids[9] = {'1','2','3','4','5','6','7','8','9'};
int previousChoice[9] = {0,0,0,0,0,0,0,0,0};
int turn = 1;
char gridChoicePlayer1[9];
char gridChoicePlayer2[9];

int checkForWin(int turn);
void markBoard(char grids[]);
bool validCheck(int choice);

int main()
{
    int choice;

    int player1 = 1;
    int player2 = 2;

    // Display Screen
    // beginning of the game
    markBoard(grids);


    // Check win or draw or continue
while(true){

    // Getting input from user
        if(turn % 2 == 1){
        printf("\nPlayer %d, enter a number : ",  player1);
       scanf("%d", &choice);
        }else{
        printf("\nPlayer %d, enter a number : ",  player2);
        scanf("%d", &choice);
    }

    // Checking the input is valid or not
    while(validCheck(choice)){
        printf("Invalid move.\n");
        printf("Enter your number : ");
        scanf("%d", &choice);
    }

    // if it is valid, change the turn and store the value
    if(turn % 2 == 1){
        grids[choice-1] = 'X';
        gridChoicePlayer1[choice-1] = 1;
    }else{
        grids[choice-1] = 'O';
        gridChoicePlayer2[choice-1] = 1;
    }
    system("clear");

    // And redisplay the screen
    markBoard(grids);
    // if it is not above situations, continue to getting input from user.....
    if(checkForWin(turn) == 2){
        printf("Plalyer 1 win!");
        break;
    }else if(checkForWin(turn) == 3){
        printf("Player 2 win!");
        break;
    }else if(checkForWin(turn) == 4){
        printf("It is draw");
        break;
    }

    turn++;

    }

    return 0;
}

void markBoard(char grids[]){
    printf("\t Tic   Tac   Toe\n\n\n");
    printf("Player 1   (X)      -      Player 2 (O)\n\n\n");
    printf("    |     |     \n");
    printf("  %c |  %c  |  \%c \n", grids[0], grids[1], grids[2]);
    printf("____|_____|_____\n");
    printf("    |     |     \n");
    printf("  %c |  %c  |  \%c \n", grids[3],grids[4],grids[5]);
    printf("____|_____|_____\n");
    printf("    |     |     \n");
    printf("  %c |  %c  |  \%c \n", grids[6],grids[7],grids[8]);
    printf("____|_____|_____\n");
}
// cant check previous position
bool validCheck(int choice){
    if(choice > 9 || choice <1){
        return true;
    }
    // it works after change this part.
    //    previousChoice[choice-1] = choice-1; to 1
    // the reason is if choice is 1, choice-1 is 0. so 0 is saved to previousChoice[0]
    // Then it does not work on to check draw

    if(previousChoice[choice-1] == 0){
        previousChoice[choice-1] = choice;
        return false;
        }
    return true;
}

/*
case 1. 0,1,2
case 2. 3,4,5
case 3. 6,7,8

case 4 0,3,6
case 5 1,4,7
case 6 2,5,8

case 7 0,4,8
case 8 2,4,6
*/
int checkForWin(int turn){
    if(turn % 2 == 1){
            if(gridChoicePlayer1[0] == 1 && gridChoicePlayer1[1] == 1 && gridChoicePlayer1[2] == 1){
                return 2;
            }
            else if(gridChoicePlayer1[3] == 1 && gridChoicePlayer1[4] == 1 && gridChoicePlayer1[5] == 1){
                return 2;
            }
            else if(gridChoicePlayer1[6] == 1 && gridChoicePlayer1[7] == 1 && gridChoicePlayer1[8] == 1){
                return 2;
            }
            else if(gridChoicePlayer1[0] == 1 && gridChoicePlayer1[3] == 1 && gridChoicePlayer1[6] == 1){
                return 2;
            }
            else if(gridChoicePlayer1[1] == 1 && gridChoicePlayer1[4] == 1 && gridChoicePlayer1[7] == 1){
                return 2;
            }
            else if(gridChoicePlayer1[2] == 1 && gridChoicePlayer1[5] == 1 && gridChoicePlayer1[8] == 1){
                return 2;
            }
            else if(gridChoicePlayer1[0] == 1 && gridChoicePlayer1[4] == 1 && gridChoicePlayer1[8] == 1){
                return 2;
            }
            else if(gridChoicePlayer1[2] == 1 && gridChoicePlayer1[4] == 1 && gridChoicePlayer1[6] == 1){
                return 2;
            }
    }
    else{
            if(gridChoicePlayer2[0] == 1 && gridChoicePlayer2[1] == 1 && gridChoicePlayer2[2] == 1){
                return 3;
            }
            else if(gridChoicePlayer2[3] == 1 && gridChoicePlayer2[4] == 1 && gridChoicePlayer2[5] == 1){
                return 3;
            }
            else if(gridChoicePlayer2[6] == 1 && gridChoicePlayer2[7] == 1 && gridChoicePlayer2[8] == 1){
                return 3;
            }
            else if(gridChoicePlayer2[0] == 1 && gridChoicePlayer2[3] == 1 && gridChoicePlayer2[6] == 1){
                return 3;
            }
            else if(gridChoicePlayer2[1] == 1 && gridChoicePlayer2[4] == 1 && gridChoicePlayer2[7] == 1){
                return 3;
            }
            else if(gridChoicePlayer2[2] == 1 && gridChoicePlayer2[5] == 1 && gridChoicePlayer2[8] == 1){
                return 3;
            }
            else if(gridChoicePlayer2[0] == 1 && gridChoicePlayer2[4] == 1 && gridChoicePlayer2[8] == 1){
                return 3;
            }
            else if(gridChoicePlayer2[2] == 1 && gridChoicePlayer2[4] == 1 && gridChoicePlayer2[6] == 1){
                return 3;
            }
    }

    // check for draw
    for(int i = 0; i < 9; i++){
        if(previousChoice[i] == 0)
            return 5;
    }
    return 4;


    // no winner and no draw. Continue the game

}
