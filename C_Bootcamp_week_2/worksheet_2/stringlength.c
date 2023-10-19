#include <stdio.h>

int str_len(char strinput[100]){
    int count = 0;
    while (strinput[count] != '\0'){
        count = count + 1;
    }
    return count;
}

int main(){
    char strinput[100];
    printf("Enter a string: ");
    scanf("%s", strinput);
    int new_length = str_len(strinput);
    printf("Your string is of length %d ", new_length);
}