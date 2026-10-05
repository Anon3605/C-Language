#include<stdio.h>
#include<stdbool.h>

int main(){
    // This is the integer variable for my age
    bool isAdult = false;
    int age = 26;
    printf("Age: %d", age);
    printf("Today is specifically 05/10/2026\n");
    int month = 10;
    int day = 5;
    //This is the string variable for the current date
    char currentDate[20] = "05/10/2026\n";
    //This is the string variable for my birthday
    char birthday[20] = "25/09/2000\n";
    printf("My actual bithday is: %s", birthday);
    int actualAge = 2026 - 2000;
    int actualMonth = 10 - 9;
    int actualDay = 5 - 25;
    //This is the float variable for my actual age in years
    //Don't worry about the complexity of the calculation 
    //I will explain it in operation files
    float inYears = actualAge + (actualMonth / 12.0) + (actualDay / 365.0);
    printf("My actual age is: %f", inYears);
    printf("Here you go the three types of variables I have used in this program \n");
    printf("Integer, String, and Float\n");
    printf("Did we miss any type of variable? If yes, obviously.\n");
    printf("What about the boolean variable?\n");
    printf("Am I an adult?\n" /* %s\n", (age > 18) ? "true" : "false"*/);
    isAdult = (age > 18);
    //This is the boolean variable for checking if I am an adult or not, which I am, obviously.
    if(isAdult){
        printf("Yes, I am an adult\n");
    } else {
        printf("No, I am not an adult\n");
    }
    //Don't worry about the if else statement. 
    //This is called branching in programming. 
    //I will explain it in the next file.
    printf("Key takeaways from this file:(I mean me obviously)\n");
    printf("1. Variables are used to store data in a program.\n");
    printf("2. Integers are used to store whole numbers.\n");
    printf("3. Strings are used to store text in arrays\n   which we use [] after the variable name (Specifically in C not in C++ BTW).\n");
    printf("4. Floats are used to store decimal numbers.\n");
    printf("5. Booleans are used to store true or false values.\n");
    printf("6. '%%d' is an integer variable, '%%s' is a string variable, '%%f' is a float variable, and '%%s' is also for boolean variable.\n");
    //Don't panic over anything that doesn't make sense now, just trust the process.
    //I won't skip anything that I wrote in files. Trust me on this.
    return 0;
}