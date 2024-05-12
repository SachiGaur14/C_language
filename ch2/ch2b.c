#include<stdio.h>
int main() {
    // division operator
printf("quotient of 3/2 will be = %d\n",3/2);
printf("quotient in decimal = %f\n",3.0/2);

// type conversion
int c = (int) 1.9999;
printf("%d\n",c);

/* precedence order
*, /, %
+, -
=
same precedence = solve left to right
*/
printf("%d\n",4+9*10);
printf("%d\n",4*3/6*2);
printf("%d\n",5*(2/2)*3);

return 0;
}
