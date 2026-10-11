#include<stdio.h>
#include<stdbool.h>

int main(){
    printf("Let's create a loop for multiplication table for 9\n");

    //This is a for loop  which is why we used For here
    //Nothing Fancy to show
    for(int i=1; i<=10; i++){
        printf("%d X %d = %d\n", 9, i, 9*i);
    }

    printf("Let's create a loop for multiplication table for 99\n");
    int i=0;
    // This is a while loop and trust me, this is where you show your creativity 
    while(true){
        printf("%d X %d = %d\n", 99, i, 99*i);
        i+=1;
        if(i>10){
            break;
        }
    }
    
    int j = 0;
    // This is a do while loop, so do first then go for while. For same conditional codes the loop count is 
    // do while = while + 1
    // By the way that's generally for the same conditions
    do{
        printf("This is a solid ground number %d\n", j);
        if(j==10){
            printf("A perfect %d\nBravoooooo", j);
        }
        j+=2;
    }
    while(j<11);

} 