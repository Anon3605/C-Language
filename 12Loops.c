#include<stdio.h>
#include<stdbool.h>

int main(){
    printf("Let's create a loop for multiplication table for 9\n");
    for(int i=1; i<=10; i++){
        printf("%d X %d = %d\n", 9, i, 9*i);
    }

    printf("Let's create a loop for multiplication table for 99\n");
    int i=0;
    while(true){
        printf("%d X %d = %d\n", 99, i, 99*i);
        i+=1;
        if(i>10){
            break;
        }
    }

    int j = 0;
    do{
        printf("This is a solid ground number %d\n", j);
        if(j==10){
            printf("A perfect %d\nBravoooooo", j);
        }
        j+=2;
    }
    while(j<11);

} 