#include<stdio.h>
// function to reverse an array.
void reverse(int ar[], int n);
void print(int ar[], int n);

int main() {
    int ar[] = {1, 2, 3, 4, 5};
    reverse(ar, 5);
    print(ar, 5); // value of array is changed for whole program.
    return 0;
}   // if you pass array as an argument then it is call by reference as array is a pointer.

void reverse(int ar[], int n) {
    for(int i=0; i<(n/2); i++) {
     int firstvalue = ar[i];
     int lastvalue = ar[n-i-1];
     ar[i] = lastvalue;
     ar[n-i-1] = firstvalue; 
    }
}

void print(int ar[], int n) {
    for(int i=0; i<n; i++){
        printf("%d\t",ar[i]);
    }
}
