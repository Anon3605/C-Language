#include<stdio.h>
#include<stdbool.h>


//wrtiing information about the function not the function itself.

//returnType name (parameters);
void greetings(char name[], int age);
bool agef(int age);



int main(){
    int age;
    char name[50];

    printf("what is your real name?\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("What is you age?\n");
    scanf("%d", &age);
    greetings(name, age);

}

// Then write the functions in any portion of the code 

void greetings(char name[], int age){
    printf("Hello %s\n", name);
    printf("Are you %d years old? y/n\n", age);
    char ans;
    scanf(" %c", &ans);
    if(ans=='y'){
        if(agef(age)==1){
            printf("Yo you're already 18+!!\nYou're able to drink beer now");
        }
        else{
            printf("Give me the real age please");
        }
    }
}

bool agef(int age){
    return age >= 18;
}