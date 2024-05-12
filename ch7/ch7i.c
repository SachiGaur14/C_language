#include<stdio.h>
// function to count number of odd no. in an array.
int countodd(int ar[], int n);

int main() {
    int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d",countodd(ar, 9));
    return 0;
}

int countodd(int ar[], int n) {
    int count = 0;
    for(int i=0; i<n; i++){
        if(ar[i] % 2 != 0){
            count++;
        }
    }
    return count;
}