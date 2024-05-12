#include<stdio.h>
int main() {
    
//pp(*)
int i, j;
   for(i=0; i<=4; i++){
    for(j=0; j<=i; j++){
        printf("%c",'*');
    }
    printf("\n");
   }
   
    return 0;
}
