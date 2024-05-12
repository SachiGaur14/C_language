//Factorial with recursion.
#include<stdio.h>
int fact(int n);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
   printf("Factorial is : %d", fact(n));
   return 0;
}

int fact(int n){
    int fact_n;
    if (n == 1){
        return 1;
    }
    fact_n = n * fact(n-1);
    return fact_n;
}