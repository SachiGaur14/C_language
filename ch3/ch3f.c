#include<stdio.h>
// to find if a character is in upper case or in lower case.
int main() {
    char ch;
    printf("Enter character = ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Upper case \n");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Lower case \n");
    }
    else{
        printf("Not an english letter");
    }
    return 0;
}