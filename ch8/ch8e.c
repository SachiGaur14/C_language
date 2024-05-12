#include<stdio.h>
#include<string.h>
// to print length of a string.
int length(char ar[]);

int main() {
    char name[100];
    printf("Enter name = ");
    fgets(name, 100, stdin);
    printf("length is : %d\n",length(name));

    char name_[] = "sachi gaur";
   printf("new length is %d",strlen(name_)); // tell string's length
    return 0;
}

int length(char ar[]) {
    int count = 0;
    for(int i=0; ar[i] != '\0'; i++){
        count++;
    }
    return count-1; // it will count null character also.
}