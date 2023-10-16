#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    if (number < 0){
        printf("Your number is negative ");
    } else if (number > 0) {
        printf("Your number is positive ");
    } else if (number == 0){
        printf("Your number is zero ");
    }
}