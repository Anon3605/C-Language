#include<stdio.h>

int main(){

    /*Okay, hear this one out, we used mathmatical operator for operations,
    what do we use to control the flow of our programs?
    That's if-else statements
    But how do we know the logic?
    Yeap, we use another operation for that called Relational Operators*/

    // == (equal to)
    // != (not equal to)
    // >  (greater than)
    // <  (less than)
    // >= (greater than or equal to)
    // <= (less than or equal to)

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("I am assuming this is your AGE, SikEEE\n");
    if(number<0){
        printf("You are not born yet, how do you get Laptop in heaven?\n");
    }
    else if(number>=0 && number<=12){
        printf("Now a child knows how to run C file, shame on me\n");
    }
    else if(number>=13 && number<=19){
        printf("Yo!!! which school teches to run C files?\n");
    }
    else if(number>=20 && number<=70){
        printf("Welcome sir\n");
    }
    else{
        printf("PLease have some rest and spend time with your grandchildren, give us the chance to rule the world...\n");
    }

    return 0;
}
