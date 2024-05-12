#include<stdio.h>
// Pointers
int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("address = %p\n & value at that address is %d\n ",ptr ,_age);
    // different ways to print a pointer/address.
    printf("%p\n",&age);   
    printf("%p\n",&ptr);
    printf("%p\n",ptr);
    printf("%u\n",ptr);   //%u means unsigned integer value

    //different ways to print value at address stored in pointer.
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    printf("%d\n",age);
    return 0;
}