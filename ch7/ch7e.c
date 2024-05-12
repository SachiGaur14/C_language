#include<stdio.h>
// array is a pointer -- which point at its base position or 0th position.
int main() {
    int array[] = {100,200,300};
    int *ptr = &array[0];
    int *ptr1 = array;
    int *ptr2 = &array[1];
    printf("%d\n",*ptr);
    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);
    return 0;
}