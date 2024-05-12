#include<stdio.h>
// comparing or subtractiong two pointers.
int main() {
    int age = 22;
    int _age = 24;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u\n",ptr);
    printf("%u\n",_ptr);
    printf("Difference = %u\n",ptr-_ptr);
    printf("Difference = %u\n",*_ptr-*ptr);
    _ptr = &age;
    printf("are they equal on comparing = %u\n",ptr == _ptr); // 1 means yes or 0 means no
    return 0;
}