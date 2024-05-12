#include<stdio.h>
// function to say namaste if indian , bonjour if french.
void namaste();
void bonjour();

int main() {
    char ch;
    printf("Enter i for indian anf f for french = ");
    scanf("%c",&ch);
    if(ch == 'i'){
        namaste();
    }
    else if(ch == 'f'){
        bonjour();
    }
    else{
        printf("Hello!!\n");
    }
    return 0;
}

void namaste() {
    printf("Namaste!!\n");
}
void bonjour() {
    printf("Bonjour!!\n");
}