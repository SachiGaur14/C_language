#include<stdio.h>
#include<math.h>
/* to find value of exponential terms
 i.e. a to the power of b*/
int main() {
    int a,b;
printf(" value of a and b is = \n");
scanf("%d%d",&a,&b);
int power = pow(a,b);
printf("a to the power of b is = %d\n",power);

// modular operator % gives remainder for int values only.
printf(" Remainder left will be = %d\n\n",a%b);

return 0;
}