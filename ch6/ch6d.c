#include<stdio.h>
void square(int n);
void _square(int *n);

int main() {
    int number;
    printf("Enter number = ");
    scanf("%d",&number);
    square(number);
    printf("Number was %d\n\n",number);

    _square(&number);
    printf("Number was %d\n",number);
    return 0;
}
// call by value -- doesnot change argument's value
void square(int n) {
    n = n*n;
    printf("Square = %d\n",n);
}
// Call by reference -- change the value of argument
void _square(int *n) {
    *n = (*n) * (*n);
    printf("Square = %d\n",*n);
}