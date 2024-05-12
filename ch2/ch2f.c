// Swapping
#include<stdio.h>
int main() {
    int a, b, temp;
    printf("Enter a and b : ");
    scanf("%d%d", &a, &b);
    printf("Before swapping : %d\t%d\n", a, b);
    printf("After swapping : ");
    temp = a;
    a = b;
    b = temp;
    printf(" %d\t%d", a, b);

    return 0;
}