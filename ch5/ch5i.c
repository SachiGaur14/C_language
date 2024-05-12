#include<stdio.h>
//to calculate sum of n natural numbers by recursion.
int sum(int n);

int main() {
    int n;
    printf("Enter number = ");
    scanf("%d",&n);
    printf("Sum is : %d",sum(n));
    return 0;
}

int sum(int n){
    if (n == 1){
        return 1;
    }
    int sum_nm1 = sum(n-1);
    int sum_n = sum_nm1 + n;
    return sum_n;
}