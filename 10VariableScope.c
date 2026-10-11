#include<stdio.h>

//Global Scope
int absolute = 0;

int localFunction(int x, int y, int z){
    //Local Scope
    int a, b, c;
    a=10;
    b=20;
    c=30;
    return x+y+z;
}

int main(){
    //Main Scope
    int u, v, w;
    scanf("%d", &u);
    scanf("%d", &v);
    scanf("%d", &w);
    int a = u+v;
    int b = u-v;
    int c = w*v;

    int val = localFunction(a,b,c);
    printf("%d\n", val);
    printf("%d\n", absolute);
}