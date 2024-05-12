#include<stdio.h>
// to calculate sum, product & average of two numbers.
int function(int a, int b);

int main(){
    int a , b;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    function(a,b);
    return 0;
}

int function(int a, int b) {
    int sum = a+b;
    printf("sum is %d\n",sum);
    int product = a*b;
    printf("product is %d\n",product);
    int average = (a+b)/2;
    printf("average is %d\n",average);
    return 0;
}