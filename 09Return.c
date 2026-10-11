#include<stdio.h>
#include<math.h>

int square(int x){
    return pow(x, 2);
}

int cube(int x){
    return pow(x,3);
}

float logg(int x){
    return log(x);
}


int main(){
    int x, y, z, sq, qq;
    float lg, sum;
    x=y*4; y=8*z;
    printf("Give me a number: ");
    scanf("%d", &z);
    
    sq=square(z);
    qq=cube(z);
    lg=logg(z);

    sum = (x+y+z+sq+qq)/lg;
    printf("This is a mystery number man %f\n", sum);


}