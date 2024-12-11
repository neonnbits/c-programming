#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumberGenerator(){

    int random = rand();

    int upper = 100, lower = 1;
    int num = random % (upper - lower + 1) + lower;
    return num;
}

void game_start(int number){
    int attempts = 0;
    while(1){
        attempts++;
        printf("Guess the number: ");
        int guess;
        scanf("%d", &guess);

        if(guess == number){
            printf("You guessed it right! Attempts: %d\n\n\n", attempts);
            break;
        }
        else if(guess < number){
            printf("Guessed number is small. Try again.\n");
        }
        else{
            printf("Guessed number is big. Try again.\n");
        }
    }
}

int main(){
    srand(time(NULL));
    while(1){
        printf("\nGuess the number between 1 to 100.\n");
        printf("1. Start\n");
        printf("2. Exit\n");
        int num = randomNumberGenerator();
        int choice;
        scanf("%d", &choice);

        switch(choice){
            case 1:
                game_start(num);
                break;
            case 2:
                printf("Game exited.\n");
                exit(EXIT_SUCCESS);
                break;
            default:
                printf("Invalid input. Try again.\n");
        }
    }
}