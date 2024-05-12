#include<stdio.h>
int main() {
    // pp(ABCDE)
    int i,j;
    for(i=65; i<70; i++){
        for(j=65; j<=i; j++){
            printf("%c",i);
        }
        printf("\n");
    }
    
     return 0;
}