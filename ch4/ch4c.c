#include<stdio.h>
// While loop
int main() {
    int i=1;
    while(i <= 5)  {
        printf("%d \t",i);
        i++;
    }

    int n, j=0;
    scanf("%d",&n);
    while(j <= n) {
        printf("%d \n",j);
        j++;
    }

    return 0;
}