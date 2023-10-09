#include <stdio.h>

int main() {
    float side1;
    float side2;
    
    printf("Give the length of one side of the rectangle: ");
    scanf("%f", &side1);
    printf("Give the length of the other side of the rectangle: ");
    scanf("%f", &side2);

    float area = side1 * side2;

    printf("The area of rectangle with sides %f and %f is %f\n", side1, side2, area);

    return 0;

}