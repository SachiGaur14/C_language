#include<stdio.h>
// to calculate factorial of a number n.
int main() {
    int n;
    printf("Enter number = ");
    scanf("%d",&n);

    int fact =1;
    for(int i=1; i<=n; i++) {
        fact = fact*i;
    }
    printf("value of factorial = %d\n",fact);

    //to print table in reverse order.
    int s;
    printf("enter number = ");
    scanf("%d",&s);
    for(int i=10; i>=1; i--) {
        printf("%d\t",s*i);
    }

    return 0;
}