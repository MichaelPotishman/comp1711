#include <stdio.h>

int main() {
    int number = 41;
    int usernum;
    int found = 0;

    while (!found){
        printf("Guess a number from 0-100: ");
        scanf("%d", &usernum);
        if (usernum > number){
            printf("Too high, guess again \n");
        } else if (usernum < number){
            printf("Too low, guess again \n");
        } else {
            found = 1;
        }

    if (found){
        printf("Correct\n"); 
    }
    

    }
}