#include<stdio.h>
int main() {
    // true if it is sunday and/or snowing
    /* && = and operator
    || = or operator
     table is like logic gates*/
    int sunday;
    int snowing;
    scanf("%d%d",&sunday,&snowing);
    printf("%d \n",sunday && snowing);
    printf("%d \n",sunday || snowing);
    return 0;
}