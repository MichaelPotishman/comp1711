#include <stdio.h>
#include <math.h>

float circleVolume(double radius){
    float volume;
    volume = (4/3) * 3.14 * pow(radius, 3);
    return volume;
}

int main(){
    double radius;
    printf("Radius of sphere: ");
    scanf("%lf", &radius);
    float volume = circleVolume(radius);
    printf("The volume of a sphere with radius %lf is %f ", radius, volume);
    return 0;


}