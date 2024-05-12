//Menu based basic calculator.
#include<stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter operation(+, -, *, /) : ");
    scanf("%c",&op);
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
   
    switch(op){
    case'+' : printf("sum : %d", a+b);
              break;
    case'-' : printf("difference : %d", a-b);
              break;
    case'*' : printf("product : %d", a*b);
              break;
    case'/' : printf("division : %d", a/b);
              break;
    default : printf("Invalid operation");
    }

    return 0;
}