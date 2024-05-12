#include<stdio.h>
// nested if else function.
int main() {
    int number;
    printf("Enter number = ");
    scanf("%d",&number);

    if (number >= 0){
        printf("positive \n");
        if( number % 2 == 0){
        printf("even \n");}
        else{
            printf("odd\n");
        }
    }
    else{
        printf("negative \n");
         if( number % 2 == 0){
        printf("even \n");}
        else{
            printf("odd\n");
        }
    }
    return 0;
}