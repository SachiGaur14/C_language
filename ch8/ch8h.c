#include<stdio.h>
#include<string.h>
// to add salt to password.
void salt(char pass[]);

int main() {
    char password[20];
    scanf("%s",password);
    salt(password);
    return 0;
}

void salt(char pass[]) {
    char salt[] = "123";
    char newpass[50];
    strcpy(newpass, pass);
    strcat(newpass, salt);
    puts(newpass);
}