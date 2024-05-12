#include<stdio.h>
// then gets() is used to input string but it is outdated,
// fgets(str, size, stdin) is used to input ,
// puts() is used to get output .   
int main() {
    char str[50];
    printf("enter name = ");
    gets(str);
    puts(str);

    char any[10];
    printf("enter = ");
    fgets(any, 10, stdin); // take input till n-1 
    puts(any);

    return 0;
}

// these are used as they can input spaces.
