#include<stdio.h>
// to read data from a file.
int main() {
    FILE *fptr;
    fptr = fopen("abc.txt","r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character is : %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("character is : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character is : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character is : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character is : %c\n", ch);
    fclose(fptr);

    FILE *fptr1;
    fptr1 = fopen("abc2.txt","r");
    int n;
    fscanf(fptr1, "%d", &n);
    printf("number : %d\n", n);
    fscanf(fptr1, "%d", &n);
    printf("number : %d\n", n);
    fclose(fptr1);

    return 0;
}