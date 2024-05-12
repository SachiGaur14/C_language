#include<stdio.h>
//array in a function as argument
void printno(int array[], int n); // can also write (int *array, int n)
int main() {
    int array[] = {1, 2, 3, 4, 5};
    printno(array, 5);
    return 0;
}
void printno(int array[], int n){
    for(int i=0; i<n; i++){
    printf("%d\t",array[i]);
}
}