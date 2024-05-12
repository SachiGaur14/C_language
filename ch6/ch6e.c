#include<stdio.h>
// swapping two numbers.
void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 3, y = 5;
    printf("x is %d & y is %d\n", x, y);
    swap(x,y);
    printf("x is %d & y is %d\n", x, y);
    _swap(&x,&y);
    printf("x is %d & y is %d\n", x, y);
        return 0;
}
// call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf(" after swapping --\na is %d & b is %d\n",a ,b);
}
//call by reference
void _swap(int *a, int *b) {
   int t = *a;
   *a = *b;
   *b = t;
printf(" after swapping --\na is %d & b is %d\n",*a ,*b);
}