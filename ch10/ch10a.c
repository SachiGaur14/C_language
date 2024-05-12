#include<stdio.h>
// FILE is a hidden structure.

int main() {
   // to open or close a file.
    FILE *fptr;
    fptr = fopen("abc.txt","r");
    fclose(fptr);

    //to check if a file exist or not.
    FILE *fptr1;
    fptr1 = fopen("abc2.txt","r");  // if file doesn't exist then null is stored in fptr1.
    if (fptr1 == NULL){
        printf("File doesn't exist.");
    }
    else{ printf("File exists.");
     }
    fclose(fptr1);

    // to create a file.
     FILE *fptr2;
    fptr2 = fopen("abc2.txt","w"); // if file doesn't exist then it will create one.
    fclose(fptr2);
    return 0;
}