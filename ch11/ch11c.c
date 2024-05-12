#include<stdio.h>
#include<stdlib.h>
//calloc function
int main() {
    float *ptr1;
    ptr1 = (float*)calloc(5, sizeof(float)); // by default it stores 0.
    for(int i=0; i<5; i++){
        printf("%f\n",ptr1[i]);
    }
    free(ptr1);

    //to allocate memory of n size.
    int *ptr, n;
    printf("Enter n : ");
    scanf("%d",&n);
    ptr = (int*)calloc(n, sizeof(int));
    for(int i=0; i<n; i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);

    return 0;
}