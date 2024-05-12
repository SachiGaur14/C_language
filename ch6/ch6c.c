#include<stdio.h>
// pointer to pointer - i.e. it stores address of a pointer.
int main() {
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%p\n",*ptr);       // address of i
    printf("%d\n\n",*ptr);    //value at i

    printf("%p\n",**pptr);    // address of i
    printf("%d\n",**pptr);    // value at i
    
    return 0;
}