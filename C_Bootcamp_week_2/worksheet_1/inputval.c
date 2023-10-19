#include <stdio.h>

int main(){
    int done = 0;
    while (done == 0){
        int numb;
        printf("Enter a number");
        scanf("%d", &numb);
        if ((numb < 0 || numb > 100) && numb != -1 ){
            printf("Choose a number in range\n");
        }
        if (numb == -1){
            printf("Done");
            done = 1;
        }
    }
    
}