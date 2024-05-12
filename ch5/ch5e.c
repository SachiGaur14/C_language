#include<stdio.h>
// to print table of n.
void table(int n);

int main() {
    int n;
    printf("enter number = ");
    scanf("%d",&n);

    table(n); // here n is argument

    return 0;
}

void table(int n){ //here n is parameter
    for(int i=1; i<=10; i++){
        printf("%d\t",i*n);
    }
}