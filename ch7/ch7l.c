#include<stdio.h>
//to print table of 2 and 3 by creating 2D array.
void table(int ar[][10], int r, int c, int n);
int main() {
    int artable[2][10];
    table(artable, 0, 10 , 2);
    table(artable, 1, 10, 3);

    for(int i=0; i<10; i++){
        printf("%d\t",artable[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d\t",artable[1][i]);
    }
    return 0;
}
void table(int ar[][10],int r, int c, int n){
    for(int i=0; i<c; i++){
    ar[r][i] = n * (i+1); 
    }
}