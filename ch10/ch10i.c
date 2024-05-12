// two numbers are written in a file. program to replace them with their sum.
#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("sum.txt","r");
    int a,b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "sum of %d and %d is : %d", a,b,a+b);
    fclose(fptr);

    return 0;
}