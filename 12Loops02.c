#include<stdio.h>

int main()
{
    int i = 0;
    for(int j=0; j<=100; j++){
        printf("%d\n",i);
        if(i%5==0 && i!=0){
            printf("Boom Shakalak!!\n");
            break; 
            //This will break the loop
        }
        if(i%2==0){
            printf("You are saved somehow\n");
            i+=3;
            i=i+(i%30);
            continue;
            //The loop repeats
        }
        printf("This is somehow lucky!!\n");
        
    };
    printf("This is somehow not lucky!! but obvious\n");
}
