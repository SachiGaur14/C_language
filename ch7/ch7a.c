#include<stdio.h>
// Array -- collection of similar data type stored in continuous memory location.
int main() {
    int marks[3];
    printf("enter marks of physics = ");
    scanf("%d",&marks[0]);
    printf("enter marks of chemistry = ");
    scanf("%d",&marks[1]);
    printf("enter marks of maths = ");
    scanf("%d",&marks[2]);

    printf("\nphysics marks = %d\t Chemistry marks = %d\t maths marks = %d\t",marks[0],marks[1],marks[2]);
    return 0;
}
