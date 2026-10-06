#include<stdio.h>
#include<conio.h>

int main(){
    //Just few arithmetic opertaions that will take you to moon
    //I mean these works everywhere 
    //Addition, Subtraction, Multiplication, Division, Modulus, AND, OR, XOR, NOT, Left Shift, Right Shift
    //+, -, *, /, %, &, |, ^, ~, <<, >>
    
    int a = 10;
    int b = 20;

    //Arithmetic Operations from line 14 to 29
    int sum = a + b;
    //Instruction 01
    //Please don't tell me I need to explain these operations, 
    //I know you know them, but if you don't, please check the internet
    //Learn math, python, then come back to C.

    int difference = b - a;
    //If you need explanation for this, go to instruction 01, and read it again.

    int product = a * b;
    //If you need explanation for this, go to instruction 01, and read it again.

    int quotient = b / a;
    //If you need explanation for this, go to instruction 01, and read it again.

    int remainder = b % a;
    //It's just the remainder after the division. 

    int andResult = a & b;
    //Okay for AND operation, it will return 1 if both bits are 1, 
    //otherwise it will return 0.
    //Binary for 10 is 01010
    //Binary for 20 is 10100
    //-----------------------
    //AND operation =  00000
    //So the result is 0

    int orResult = a | b;
    //Same as AND operation, OR operation will return 1 if any of 
    //the bits is 1, otherwise it will return 0.
    //Binary for 10 is 01010
    //Binary for 20 is 10100
    //-----------------------
    //OR operation =  11110
    //So the result is 30
    
    int xorResult = a ^ b;
    //XOR operation will return 1 if both bits are different,
    //otherwise it will return 0.
    //Binary for 10 is 01010
    //Binary for 20 is 10100
    //-----------------------
    //XOR operation =  11110
    //So the result is 30
    
    int notResult = ~a;
    //NOT operation will return the complement of the number.
    //Binary for 10 is 01010
    //-----------------------  
    //NOT operation =  10101
    //So the result is -11
    
    int leftShiftResult = a << 1;
    //Okay, this is how computer does multiplication by 2,
    //left shift operation will shift the bits to the left
    //by the number of positions specified.
    //Binary for 10 is 01010
    //-----------------------
    //LS operation =   10100
    //So the result is 20
    
    int rightShiftResult = b >> 1;
    //Same as left shift operation, right shift operation 
    //will shift the bits to the right by the number of positions specified.
    //Binary for 20 is 10100
    //-----------------------
    //RS operation =   01010
    //So the result is 10


    printf("Difference of %d and %d is: %d\n", b, a, difference);
    printf("Product of %d and %d is: %d\n", a, b, product);
    printf("Quotient of %d and %d is: %d\n", b, a, quotient);
    printf("Remainder of %d and %d is: %d\n", b, a, remainder);
    printf("AND of %d and %d is: %d\n", a, b, andResult);
    printf("OR of %d and %d is: %d\n", a, b, orResult);
    printf("XOR of %d and %d is: %d\n", a, b, xorResult);
    printf("Sum of %d and %d is: %d\n", a, b, sum);
    printf("NOT of %d is: %d\n", a, notResult);
    printf("Left Shift of %d by 1 is: %d\n", a, leftShiftResult);
    printf("Right Shift of %d by 1 is: %d\n", b, rightShiftResult);
    
}