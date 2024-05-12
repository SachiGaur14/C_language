#include<stdio.h>
//Recursive function - function which call itself
void print(int n);

int main() {
    print(4);
    return 0;
}

void print(int n) {
    if (n==0){
        return;
    }
    printf("Hello world!!\n");
    print(n-1); // function calling function itself.
}


