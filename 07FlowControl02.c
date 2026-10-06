#include<stdio.h>

int main(){
    int day;
    // So about this switch:
    // Switch is a flow control mechanism which is actually impressive for
    // discrete branching where if else or else if work with ranged brances.
    printf("Enter the day of the week (1-7): ");
    scanf("%d",&day);
    switch(day){
        case 1:
            printf("This is Saturday\n");
            break;
        case 2:
            printf("This is Sunday\n");
            break;
        case 3:
            printf("This is Monday\n");
            break;
        case 4:
            printf("This is Tuesday\n");
            break;
        case 5:
            printf("This is Wednesday\n");
            break;
        case 6:
            printf("This is Thursday\n");
            break;
        case 7:
            printf("This is Friday\n");
            break;
        default:
            printf("Why Do you need to make this hard for me? \n");
    }
    return 0;
}