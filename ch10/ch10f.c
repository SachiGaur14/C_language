#include<stdio.h>
// to go to the end of file(EOF).
int main() {
    FILE *fptr;
    fptr = fopen("xyz.txt","r");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}