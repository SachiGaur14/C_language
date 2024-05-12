#include<stdio.h>
//to find factorial of n numbers.
int fact(int n);

int main () {
    int n;
    printf("enter number = ");
    scanf("%d",&n);
    printf("Factorial is : %d",fact(n));
    return 0;
}

int fact(int n) {
    if (n == 1){
        return 1;
    }
    int fact_nm1 = fact(n-1);
    int fact_n = fact_nm1 * n;
    return fact_n;
}