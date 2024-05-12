// Palindrome number -- same after reversing like 121, 343, 34543.
#include<stdio.h>
int main() {
    int i, x, rev =0;
    printf("Enter number to check : ");
    scanf("%d",&i);
    x = i;
    while(i > 0){
    rev = (rev*10) + (i % 10);
    i = i/10;
    }
    
    if(rev == x){
        printf("It is a Palindrome number.");
    }
    else{
        printf("It is not a Palindrome number.");
    }

    return 0;
    }