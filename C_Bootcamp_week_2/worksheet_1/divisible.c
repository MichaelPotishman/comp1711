#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    if (number%5 == 0 && number%4 == 0){
        printf("The number %d is divisible by both 4 and 5 ", number);
    } else if (number%5 == 0 && number%4 != 0){
        printf("The number %d is divisible by 5 but not 4 ", number);
    } else if (number%5 != 0 && number%4 == 0){
        printf("The number %d is divisible by 4 but not 5 ", number);
    } else {
        printf("The number %d is not divisible by either 4 or 5 ", number);
    }
}