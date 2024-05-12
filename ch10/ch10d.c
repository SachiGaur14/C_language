#include<stdio.h>
// to append means to add something in a file.
int main() {
    FILE *fptr;
    fptr = fopen("xyz.txt","a");
    fprintf(fptr, "%c",'S');
    fprintf(fptr, "%c",'A');
    fprintf(fptr, "%c",'C');
    fprintf(fptr, "%c",'H');
    fprintf(fptr, "%c",'I');
    fclose(fptr);

    return 0;
}