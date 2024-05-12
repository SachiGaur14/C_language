#include<stdio.h>
int main() {
    // to find if a number is divisible by 2 or if it is even or odd.
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    printf("number is divisible by 2 or not = %d \n",a%2==0);
    return 0;
}