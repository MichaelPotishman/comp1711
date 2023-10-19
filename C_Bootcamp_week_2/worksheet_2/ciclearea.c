#include <stdio.h>

float circleArea(float radius){
    float area;
    area = ((3.14) * (radius*radius));
    return area;
}

int main(){
    float radius;
    float area;
    printf("Enter the radius");
    scanf("%f", &radius);

    area = circleArea(radius);
    printf("Area of circle radius %f is %f ", radius, area);


}