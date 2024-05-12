#include<stdio.h>
// to print sum.
int sum(int a,int b);

int main() {
    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    int s = sum(a,b);
    printf(" sum of a and b is = %d",s);
    return 0;
}

int sum(int a,int b){
    return a+b;
}