#include<stdio.h>
int main() {
    //Use of if-else function where else is not necessary.
    int age;
    printf("enter age = ");
    scanf("%d",&age);

    if(age >= 18)
    {
         printf("Adult");
    }
   else
   {
    printf("Not adult");
   }
   return 0;
}