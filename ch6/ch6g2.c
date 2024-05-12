#include<stdio.h>
//same question by call by reference.
void dowork(int a,int b, int *sum,int *prod,int *avg);

int main() {
    int a=3, b=5;
    int sum, prod, avg;
    dowork(a, b, &sum, &prod, &avg);
    printf("sum is %d\n product is %d\n average is %d\n",sum, prod, avg);
    return 0;
}
void dowork(int a,int b,int *sum,int *prod,int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}