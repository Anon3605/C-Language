#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    char s='y';
    while(s == 'y' || s == 'Y'){
        printf("This is a random number: %d\n", rand());
        printf("Continue??  (y/n): ");
        scanf(" %c", &s);
    }

    return 0;

}