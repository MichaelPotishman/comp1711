#include <stdio.h>

int main(){
    int array[] = {2,4,3,5,7};
    int temp;
    for (int i = 0; i <= 4; i++){
        temp = array[i];
        if (i == 4){
            array[0] = temp;
        } else {
            array[i + 1] == temp;
        }
        }
    for(int i=0; i<=4; i++) {
        printf("%d ", array[i]); 
    } 
}