#include<stdio.h>
#include<string.h>
// to check if a given character is present or not.
void checkchar(char str[], char ch);

int main() {
    char str[] = "Sachi Gaur";
    char ch;
    scanf("%c",&ch);
    checkchar(str, ch);
    return 0;
}

void checkchar(char str[], char ch) {
    for(int i=0; str[i] != '\0'; i++){
        if (str[i] == ch){
            printf("Character is present.");
            return ;
        }
    }
    printf("Character is NOT present.");
}