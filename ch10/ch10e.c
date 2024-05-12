#include<stdio.h>
// to read and write in a file using fgetc(only for characters) and fputc.
int main() {
    FILE *fptr;
    fptr = fopen("abc.txt","r");
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    fclose(fptr);

    fptr = fopen("xyz.txt","w");
    fputc('N',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
    fputc('C',fptr);
    fputc('Y',fptr);
    fclose(fptr);
    return 0;
}