#include<stdio.h>
// use of if - else if function.
int main() {
    int marks;
    printf("Enter marks = ");
    scanf("%d",&marks);

    if(marks > 90)
    {
        printf("A+");
    }
    else if( marks > 80 && marks < 90)
    {
        printf("B+");
    }
    else if( marks > 70 && marks < 80)
    {
        printf("C+");
    }
    else
    {
        printf("D+");
    }
    return 0;
}