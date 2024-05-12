#include<stdio.h>
// String
void string(char array[]);

int main() {
    char name[] = {'S','A','C','H','I','G','A','U','R','\0'}; // \0 is null character
    char name_[] = "SACHI GAUR";
    printf("%s\t%s\n",name,name_);
    char firstname[] = "Sachi";
    char lastname[] = "Gaur";
    string(firstname);
    string(lastname);

    char nick[20];
    printf("Nickname is ");
    scanf("%s", nick);
    return 0;
}

void string(char array[]){
    for(int i=0; array[i] != '\0'; i++){
        printf("%c",array[i]);
    }
    printf("\n");
}