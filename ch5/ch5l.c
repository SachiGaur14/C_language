#include<stdio.h>
//to calculate percentage of 3 subject marks
float percent(int a, int b, int c);

int main() {
    int a, b, c;
    printf("Enter marks = ");
    scanf("%d\t%d\t%d",&a,&b,&c);
    printf("percentage is = %f",percent(a,b,c));
        return 0;
}

float percent(int a, int b, int c) {
    int sum = a+b+c;
    float per = sum/300.0 * 100;
    return per;
}