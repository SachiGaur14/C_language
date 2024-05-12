#include<stdio.h>
void print(int n);
void _print(int *n);

int main() {
    int n = 4;
    printf("%p\n",&n);
    print(n);
    _print(&n);
    return 0;
}

// call by value creates a copy so address will be different.
void print(int n) {
    printf("%p\n",&n);
}

//call by reference have the same address.
void _print(int *n) {
    printf("%p\n", n);
}