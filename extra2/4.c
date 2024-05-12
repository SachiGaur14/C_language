#include<stdio.h>
//to search if a charcter is in array or not.
int main() {
    int a[] = {1,2,3,4,5};
    int n, i, f=0;
    printf("enter number to be checked : ");
    scanf("%d",&n);
    for(i=0; i<5; i++){
    if(n == a[i]){
        printf("number is found at '%d' position.", i+1);
        f=1;
        break;
    }
    }
    if(f == 0){
        printf("number is not present in the array.");
    }
    
    return 0;
}