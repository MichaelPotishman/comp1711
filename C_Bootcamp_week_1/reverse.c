#include <stdio.h>

int main() {
    char string[100];
    int length; 
    int i; 

    printf("What do you want to reverse? ");
    scanf("%s", string);

    length = strlen(string);

    for (int i = length - 1; i >= 0; i--){
        printf("%c", string[i]);

    }
}
