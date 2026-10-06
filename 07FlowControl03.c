#include <stdio.h>

int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Your Fortune: Negative numbers suit you.\n      You were never meant to follow the positive path.\n");
    }
    else {
        if (number >= 0 && number <= 12) {
            printf("Your Fortune: You have 0 bugs...\n     Because you haven't written enough code yet.\n");
        }
        else {
            if (number >= 13 && number <= 19) {
                printf("Your Fortune: You will spend 10 minutes fixing a bug and...\n   3 hours discovering it was a missing semicolon.\n");
            }
            else {
                if (number >= 20 && number <= 70) {
                    printf("Your Fortune: Your code compiles on the first try.\n    Unfortunately, you are dreaming.\n");
                }
                else {
                    printf("Your Fortune: You have reached legendary status.\n     Even Stack Overflow cannot save you now.\n");
                }
            }
        }
    }

    return 0;
}