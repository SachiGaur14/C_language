#include<stdio.h>
// to show use of fseek, ftell and rewind function.
int main(){
    FILE *fptr;
    fptr = fopen("abc.txt", "r");
    char ch;
    fseek(fptr, 5, SEEK_SET);
    printf("position of file pointer : %d\n", ftell(fptr));
    ch = fgetc(fptr);
    printf("charcter : %c\n", ch);

    rewind(fptr);
    ch = fgetc(fptr);
    printf("first character : %c\n", ch);

    fseek(fptr, 0, SEEK_END);
        printf("total charcters in the file is : %d\n", ftell(fptr));
        ch = fgetc(fptr);
        printf("last charcter : %c", ch);
    

   return 0;
}