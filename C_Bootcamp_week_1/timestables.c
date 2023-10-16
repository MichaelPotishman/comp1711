#include <stdio.h>

int main(){

    for (int i = 1; i < 13; i++){
        for (int j = 1; j < 13; j++){
            printf("%d * %d = %d\n", i,j,j*i);
        }
    }
}