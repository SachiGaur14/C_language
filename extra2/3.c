//matrix transpose.
#include<stdio.h>
int main() {
    int a[2][2], b[2][2];
    int i, j;
    printf("Elements of the matrix are : \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of the matrix are : \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix is : \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            b[j][i] = a[i][j];}
    }
    
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}