#include <stdio.h>

int main() {
    int number;
    int total = 1;
    int i;
    printf("Enter the number to see its factorial value: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++){
        total = (total * i);
    }

    printf("%d", total);
}