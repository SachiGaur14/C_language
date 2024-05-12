#include<stdio.h>
int main() {
    char firstname[20];
    printf("Enter name = ");
    scanf("%s",firstname);    // scanf cant input multi words string with spaces
    printf("Your name is %s",firstname);

    return 0;
}
