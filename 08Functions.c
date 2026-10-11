#include<stdio.h>
#include<time.h>

void justAmessage(char name[], int age){
    printf("Hello Mr %s", name);
    printf("You are %d years old", age);
}

int main(){
    char name[50];
    int age;
    // time_t time(time_t *timer);
    time_t timeCurr; 
    //if this is concerning you
    //just another data type for time and date
    time(&timeCurr);
    /*
    I mean just to let you know, time() is a function
    and this function gives current calendar time. So why use 
    &variable here?
    Basically just putting the value in the time_t variable typed
    variable's memory location and it's showed using %s means string
    */

    printf("Current Time is %s",ctime(&timeCurr));
    printf("Tell me your name: ");
    fgets(name,sizeof(name),stdin);
    printf("Tell me your age: ");
    scanf("%d",&age);
    justAmessage(name, age);
    return 0;

}