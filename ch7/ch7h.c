#include<stdio.h>
//matrix 
int main() {
    int marks[2][3];
    marks[0][0] = 78;
    marks[0][1] = 88;
    marks[0][2] = 99;

    marks[1][0] = 88;
    marks[1][1] = 77;
    marks[1][2] = 96;
    printf("%d\n",marks[1][0]);
    printf("%d\n",marks[0][2]);
    return 0;
}