// allocate memory for 5 odd numbers then reallocate it for 6 even numbers.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr = (int*)calloc(5, sizeof(int));
    for(int i=1; i<10; i++){
        if(i%2 != 0){
            printf("%d\t", i);
        }
    }
    printf("\n");

    ptr = realloc(ptr, 6);
    for(int i=1; i<13; i++){
        if(i%2 == 0){
            printf("%d\t", i);
        }
    }
    free(ptr);

   return 0;
}