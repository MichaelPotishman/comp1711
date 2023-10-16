#include <stdio.h>
int main() {
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 50){
        if (grade >= 70){
            printf("You passed with a distinction with a score of %d ", grade);
        } else {
            printf("You passed with a score of %d ", grade);
        }
    } else {
        printf("You failed with a score of %d ", grade);
    }
}