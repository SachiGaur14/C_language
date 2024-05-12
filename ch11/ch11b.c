#include<stdio.h>
#include<stdlib.h>
// to store prices of 5 things.
int main() {
    float *ptr;
    ptr = (float*)malloc(5 * sizeof(float));
    ptr[0] = 10.5;
    ptr[1] = 30.5;
    ptr[2] = 50.5;
    ptr[3] = 70.5;
    ptr[4] = 90.5;
    for(int i=0; i<5; i++) {
        printf("%f\n",ptr[i]);
    }
    free(ptr);
 
 // again using after freeing.
    ptr = (float*)malloc(2 * sizeof(float));
    for(int i=0; i<2; i++) {
        printf("%f\n",ptr[i]);
    }
    free(ptr);

  return 0;
}