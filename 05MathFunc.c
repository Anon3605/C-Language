#include<stdio.h>
#include<math.h>

int main(){
    
    //sqrt(), pow(), sin(), cos(), tan(), log(), exp(), ceil(), floor(), fabs()
    //sqrt()-square root
    //pow()-power
    //sin()-sine
    //cos()-cosine
    //tan()-tangent
    //log()-natural logarithm
    //exp()-exponential
    //ceil()-ceiling
    //floor()-floor
    //fabs()-absolute value
    //Sorry for this dump man, I don't have time for more explanation here
    //Hope this will help in glance(maybe I am the one who's practicing :D)

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    double squareRoot=sqrt(num);
    double power=pow(num, 2);
    double sine=sin(num);
    double cosine=cos(num);
    double tangent=tan(num);
    double naturalLog=log(num);
    double exponential=exp(num);
    double ceiling=ceil(num);
    double floorVal=floor(num);
    //BTW if you want to store in float, use floorf()
    //And if you want to store in long double, use floorl()
    //Same two instructions goes for ceil() and fabs() functions as well.
    double absoluteValue=fabs(num);

    printf("Square root of %.2lf is: %.2lf\n", num, squareRoot);
    printf("%.2lf raised to the power of 2 is: %.2lf\n", num, power);
    printf("Sine of %.2lf is: %.2lf\n", num, sine);
    printf("Cosine of %.2lf is: %.2lf\n", num, cosine);
    printf("Tangent of %.2lf is: %.2lf\n", num, tangent);
    printf("Natural logarithm of %.2lf is: %.2lf\n", num, naturalLog);
    printf("Exponential of %.2lf is: %.2lf\n", num, exponential);
    printf("Ceiling of %.2lf is: %.2lf\n", num, ceiling);
    printf("Floor of %.2lf is: %.2lf\n", num, floor);
    printf("Absolute value of %.2lf is: %.2lf\n", num, absoluteValue);
}