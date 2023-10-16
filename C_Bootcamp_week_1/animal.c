#include <stdio.h>

int main() {
    char animal[20];

    printf("Enter your favourite animal: ");
    scanf("%s", animal);  // Dont need the & symbol before variable if it is a string 

    printf("Your favourite animal is: %s", animal);

}