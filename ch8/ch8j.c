#include<stdio.h>
#include<string.h>
// function to count no. of vowels in a string.
int vowels(char str[]);

int main() {
    char str[]= "Helloooworld";
    printf("Number of vowels is %d",vowels(str));
    return 0;
}

int vowels(char str[]) {
    int count = 0;
    for(int i=0; str[i] !='\0'; i++) {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            count++;
        }
    }
    return count;
}