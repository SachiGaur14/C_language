// leap year.
#include<stdio.h>
int main() {
    int n;
    printf("Enter year to check (leap year or not): ");
    scanf("%d",&n);
    if (((n%4 == 0) && (n%100 != 0)) || (n%400 == 0)){
        printf("It is a leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}