#include<stdio.h>
#include<string.h>
//a function named slice which takes a string and return a sliced string from index n to m.
void slice(char str[], int n, int m);

int main() {
    char str[] = "Helloworld!!";
    slice(str, 3, 8);
    return 0;
}

void slice(char str[], int n, int m) {
    char newstr[100];
    int j=0;
    for(int i=n; i<=m; i++, j++) {
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}