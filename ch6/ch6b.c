#include<stdio.h>
int main() {
    int x;
    int *ptr;
    ptr = &x;
    *ptr = 0;
    printf("x = %d\n",x); //x=0
    printf("*ptr = %d \n",*ptr);
    printf("ptr = %p\n",ptr);

    *ptr += 5; //*ptr = *ptr + 5
    printf("x = %d\n",x);
    printf("*ptr = %d \n",*ptr);

    (*ptr)++; // *ptr = *ptr + 1
    printf("x = %d\n",x);
    printf("*ptr = %d \n",*ptr);
    return 0;
}