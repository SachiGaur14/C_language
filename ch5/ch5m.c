#include<stdio.h>
//Fibonacci sequence - add two no. to get 3rd.
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,......
//f(0),f(1),f(2),f(3),....
int fib(int n);    // by recursion

int main() {
    int n;
    printf("find fib no. =  ");
    scanf("%d",&n);
    printf("fib(%d) = %d", n, fib(n));
    return 0;
}

int fib(int n) {
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int fibn = fib(n-1) + fib(n-2);
    return fibn;
}