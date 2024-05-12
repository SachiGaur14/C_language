#include<stdio.h>
//pointer arithmetic -- pointer can be + or -
int main() {
    int age = 22;
    int *ptr1 = &age;
    printf("%u\t",ptr1);
    ptr1++;
    printf("%u\t",ptr1);
    ptr1--;
    printf("%u\t",ptr1);

    float price = 20.0;
    float *ptr2 = &price;
    printf("\n%u\t",ptr2);
    ptr2--;
    printf("%u\t",ptr2);
    ptr2++;
    printf("%u\t",ptr2);

    char star = '*';
    char *ptr3 = &star;
    printf("\n%u\t",ptr3);
    ptr3++;
    printf("%u\t",ptr3);
    ptr3++;
    printf("%u\t",ptr3);
    return 0;
}