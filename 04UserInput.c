#include<stdio.h>

int main(){
    int age;
    char name[50];
    char university[50];
    char department[50];
    float cgpa;

    printf("Enter your name: ");
    //Limit input to avoid buffer overflow, cause you know what's gonna happen right?
    //RIGHT???
    //If you don't then here is the brief for yaa,
    //buffer overflow simply means putting more data in a temporary dtorage
    //So why will you dump fake character in your name? HUHHH????
    scanf("%49s", name); 
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your university: ");
    //Same goes for your University name
    scanf("%49s", university);
    printf("Enter your department: ");
    //Same goes for your Department name
    scanf("%49s", department);
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("Hi there, %s!\nYou are %d years old and studying in %s, %s department.\nYour CGPA is %.2f.\nReally nice to meet you mate!", name, age, university, department, cgpa);
}