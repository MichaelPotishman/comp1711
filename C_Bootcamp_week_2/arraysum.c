#include <stdio.h>

int main() {
    int array[5] = {0,1,2,3,4};
    int total = 0;
    for (int i = 0; i < 5; i++){
        total += array[i];
    }

    printf("%d", total);
}