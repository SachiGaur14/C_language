#include<stdio.h>
int main() {
    //pp(*)
int i, j, k, t=0;
    for(i=1; i<5; i++){
        for(k=t; k<4; k++){
        printf(" ");
        }
    for(j=0; j<i; j++){
        printf("*  ");
        t = t+1;
    }
    printf("\n");
   }
    return 0;
}