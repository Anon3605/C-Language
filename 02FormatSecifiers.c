#include<stdio.h>
#include<stdbool.h>
#include<wchar.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "৳");
    int age = 26;
    float expense = 20.5;
    double incoming = 30.123456;
    //I got you if you're overwhealmed right now, which I was too,.
    //double works in floating category with typically 8 bytes
    //long double works in floating category with typically 8,12,16 bytes
    //only long works in integer category with typically 4/8 bytes
    //long long works in integer category with typically 8 bytes
    char currentCharProto = '৳'; //HaHa, This is the overflow here.
    wchar_t currentChar = L'৳';
    char name[] = "MD. Arafat Sarkar";
    bool isStudent = true;

    printf("My name is %s\n", name);
    printf("I am %d years old\n", age);
    printf("I spend %.2f %lc per day\n", expense, currentChar);
    printf("My incoming is $%.6lf\n", incoming);
    printf("Current character is %lc\n", currentChar);
    printf("I am a student: %s\n", isStudent ? "true" : "false");

    printf("Normal char '৳' (Overflowed/Broken): %c\n", currentCharProto);
    printf("Wide char wchar_t '৳' (Correct): %lc\n\n", currentChar);

    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of wchar_t: %zu bytes\n", sizeof(wchar_t));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    //Key Takeway:
    //01.Use wchar_t for wide characters like '৳' to avoid overflow issues.
    //02.Use %lc format specifier for printing wide characters.
    //03.Use setlocale(LC_ALL, "") to set the locale for proper character representation.
    //04.The %zu format specifier is used to print the size of data types in bytes.
    return 0;

}