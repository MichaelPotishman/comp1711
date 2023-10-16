#include <stdio.h>
int main(){
    int option;
    printf("Choose an option, 1, 2,3, 4, 5: ");
    scanf("%d", &option);
    
    switch (option) {
        case 1: printf("This is option 1");
        break;
        case 2: printf("This is option 2");
        break;
        case 3: printf("This is option 3");
        break;
        case 4: printf("This is option 4");
        break;
        case 5: printf("This is option 5");
        break;

    }
}