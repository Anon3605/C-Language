#include<stdio.h>

int main(){
    // logical Operators
    // && (logical AND)
    // || (logical OR)
    // ! (logical NOT)
    // Trust me man, I am just doing this to feel myself complete.
    // I have OCD, so I need to complete this section as well.
    // And my OCD is a myth, I like clean and neat.

    int a[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int b[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int c[10];

    for(int i=0; i<10; i++){
        c[i] = a[i] && b[i];
        printf("Logical AND of %d and %d is: %d\n", a[i], b[i], c[i]);
    }

    for(int i=0; i<10; i++){
        c[i] = a[i] || b[i];
        printf("Logical OR of %d and %d is: %d\n", a[i], b[i], c[i]);
    }
    
    for(int i=0; i<10; i++){
        c[i] = !a[i];
        printf("Logical NOT of %d is: %d\n", a[i], c[i]);
    }

    printf("For my madness, I'll say, it's just, logical, but not logical enough to be a human being.\n"
           "simply, true && true = true, true && false = false, false && true = false, false && false = false\n"
           "simply, true || true = true, true || false = true, false || true = true, false || false = false\n"
           "simply, !true = false, !false = true\n");
    printf("Just like that, you're getting the true or false in 0/1.\n");
}