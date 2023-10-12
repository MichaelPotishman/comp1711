#include <stdio.h>

int main() {
    int num1;
    int num2;
    int added;

    printf("Give a number: ");
    scanf("%d", &num1);
    printf("Give another number: ");
    scanf("%d", &num2);

    added = num1 + num2;

    printf("Adding %d and %d = %d ", num1, num2, added);

}