#include <stdio.h>

int main() {
    int degree;
    int converted;
    printf("What degree is changing to celcius? Answer in farenheit: ");
    scanf("%d", &degree);
    converted = (degree * 1.8) + 32;

    printf("%d converted to farenheit is %d", degree, converted);

    return 0; 
}