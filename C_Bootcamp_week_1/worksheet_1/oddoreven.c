#include <stdio.h>

int main() {
    int number;

    printf("Give a number to see if it is even or odd");
    scanf("%d", &number);

    if (number % 2 == 0){
        printf("The number %d is even", number);
    } else {
        printf("The number %d is odd", number);
    }

    

    return 0;
}