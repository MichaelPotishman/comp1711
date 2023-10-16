#include <stdio.h>
int main(){
    int temp;
    printf("What is the temperature? \n ");
    scanf("%d", &temp);
    if (temp >= -10 && temp <= 40){
        printf("The temperature %d is in range ", temp);
    } else {
        printf("The temperature %d is not in range ", temp);
    }
}