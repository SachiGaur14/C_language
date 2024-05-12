#include<stdio.h>
// to calculate sum of first n natural numbers.
int main() {
    int n;
    printf("Enter number = ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1; i <= n; i++) {
        sum = sum + i; // sum += i
    }
    printf(" sum = %d \n",sum);

    // to print n numbers in reverse order
    for(int i=n; i >= 1; i--) {
        printf("%d \t",i);
    }

    // it can also be written in one for loop
    int Sum = 0;
    for(int i=1,j=n; i<=n && j>=1; i++,j--) {
        Sum = Sum +i;
        printf("%d \n",j);
    }
    printf(" sum is %d \n",Sum);

 return 0;
}