//to sort an array in ascending order.
#include<stdio.h>
int main() {
    int a[] = {3, 7, 4, 8, 2};
    int temp = 0;
    printf("Elements in original position :\n ");
    for(int i=0; i<5; i++){
    printf("%d\t", a[i]);
    }
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n");
    printf("After sorting in ascending order : \n");
    for(int i=0; i<5; i++){
        printf("%d\t",a[i]);
    }

    return 0;
}