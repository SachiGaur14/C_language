#include<stdio.h>
int main() {
    //If a number is greater than 9 but less than 100 then true.
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    printf("%d \n",(9 < a) && (a < 100));
    //if a number is equal to 100 or not by != not equal to operator
    printf("%d \n", a != 100);
    return 0;
}