#include<stdio.h>
int main() {
    //increment operator
    // i++(use then increase) ----post increment operator
    // ++i(increase then use) ----pre increment operator

/* decrement operator
   i--  [post decrement]
   --i  [pre decrement]*/
    int i=1;
    printf("%d \t", i++);
    printf("%d \n", i);

    int j=1;
    printf("%d \t",++j);
    printf("%d \n", j);

    int k=1;
    printf("%d \t",k--);
    printf("%d \n",k);

    int l=1;
    printf("%d \t",--l);
    printf("%d \n",l);
    
    return 0;
}