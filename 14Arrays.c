#include<stdio.h>

int main(){
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n",number);
    int length=sizeof(number)/sizeof(int);
    for(int i; i<length; i++){
        if(i==length-1){
            printf("%d \n", number[i]);
            break;
        }
        printf("%d -->", number[i]);
    }
    printf("\n");

    int indx;
    printf("Enter Any POSITION here from 1-10:");
    scanf("%d",&indx);
    if (indx>10 || indx<1){
        printf("Why don't follow the instruction?\nReturning...\n");
        return 0;
    }
    int val;
    printf("Enter Any value here from -999 to 999:");
    scanf("%d",&val);
    if (val>999 || val<-999){
        printf("Why don't follow the instruction?\nReturning...\n");
        return 1;
    }
    number[indx-1]=val;
    for(int i; i<length; i++){
        if(i==length-1){
            printf("%d \n", number[i]);
            break;
        }
        printf("%d --> ", number[i]);
    }
    printf("\n");
    printf("See, the value is changed, arrays are mutable here but you can't change the type nor the length.");
}