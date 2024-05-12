// Armstrong number -- equal to sum of cubes of its digits like 153,370.
//153 = (1*1*1)+(5*5*5)+(3*3*3).
#include<stdio.h>
int main() {
    int i, x, sum = 0;
    printf("Enter number to check : ");
    scanf("%d",&i);
    x = i;
    while(i > 0){
        sum = sum + (i%10)*(i%10)*(i%10);
        i = i/10;
    }

    if(sum == x){
        printf("It is an armstrong number.");
    }
    else{
        printf("It is not an armstrong number.");
    }

    return 0;
}