#include <stdio.h>

int main(){
    int max = 0;
    int array[5] = {12,534,75,23,8};

    for (int i = 0; i < 5; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    printf("%d\n",max);
    
}