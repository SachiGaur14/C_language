#include<stdio.h>
//continue statement to skip something.
int main() {
    for(int i=1; i<=5; i++) {
        if(i == 3) {
            continue;
        }
        printf("%d\n",i);
    }

    // print all the odd numbers from 5 to 50
    for(int i=5; i<=50; i++) {
        if(i%2 == 0){
            continue;
        }
        printf("%d\t",i);
    }
    return 0;
}