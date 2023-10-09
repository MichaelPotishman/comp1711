#include <stdio.h>

int main() {
    int a;
    int b;
    int mult;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    mult = a*b;

    printf("%d * %d = %d\n", a,b,mult);

    return 0;

}