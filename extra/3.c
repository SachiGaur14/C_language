// Prime number -- divisible by 1 or itself only.
#include<stdio.h>
int main() {
   int n, m, flag = 0;
   printf("Enter number to check : ");
   scanf("%d",&n);
   m = n/2;
   for(int i=2; i<=m; i++){
     if(n%i == 0){
        printf("Not a prime number.");
        flag = 1;
        break;
     }
   }
   if (flag == 0){
    printf("Prime number.");
   }

    return 0;
}