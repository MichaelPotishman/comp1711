#include <stdio.h>

int main() {
    int pi = 3.141592;
    float radius;
    float area;

    printf("What is the radius of the circle? ");
    scanf("%f", &radius);

    area = (radius*radius)*pi;

    printf("The area of a circle with radius %f is %f", radius, area);

    return 0;

}