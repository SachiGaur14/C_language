#include<stdio.h>
//Ternary operator
// Syntax - condition ? if true then what to do : if not true then what to do;
int main() {
    int age;
    printf("Enter age = ");
    scanf("%d",&age);
    age >= 18 ? printf("Adult \n") : printf("Not adult \n");
    return 0;
}