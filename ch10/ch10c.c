#include<stdio.h>
// to write in a file.
int main() {
    FILE *fptr;
    fptr = fopen("xyz.txt","w"); // it will delete old data of file and write the new one.
    fprintf(fptr, "%c",'S');
    fprintf(fptr, "%c",'A');
    fprintf(fptr, "%c",'C');
    fprintf(fptr, "%c",'H');
    fprintf(fptr, "%c",'I');
    fclose(fptr);

    return 0;
}