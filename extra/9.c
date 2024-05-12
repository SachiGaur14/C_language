#include<stdio.h>
int main() {
    // pp (12345678910)
    int i,j,k=0;
    for(i=0; i<4; i++) {
        for(j=0; j<=i; j++){
            k++;
            printf("%d",k);
        }
        printf("\n");
    }
    
     return 0;
}
