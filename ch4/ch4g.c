#include<stdio.h>
// Break statement to exit the loop.
int main() {
    for(int i=1; i <= 5; i++) {
        if(i == 3){
            break;
        }
        printf("%d\n",i);
    }

    printf("End \n");

    //check whether number is odd or even and end the loop when you get odd number.
    int n;
    do{
        printf(" enter number = ");
        scanf("%d",&n);
        if(n%2 != 0){
            break;
        }
        printf("It is an even number\n");
    }while(1);
    printf("It is an odd number\n");
    printf("end");

    return 0;
}