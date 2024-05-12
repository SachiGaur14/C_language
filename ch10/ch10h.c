// to find odd numbers from 1 to n.
#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("odd.txt", "w");

    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    fprintf(fptr, "odd numbers are: ");
    for(int i=0; i<=n; i++) {
        if(i%2 != 0){
            fprintf(fptr, "%d\t", i);
        }
    }

    fclose(fptr);
    return 0;
}