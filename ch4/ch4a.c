#include<stdio.h>
//For loop
int main() {
// i= iterator or counter variable
    for(int i = 1; i<=3; i=i+1){
        printf("Hello World!! \t");
    }

// i=i+1 == [i+=1] by assingment operator
//i=i+1 can also be written as i++
    for(int k=0; k<=10; k++){
        printf("%d \t",k);
    }

    for(int j=10; j>=1; j=j-1){
        printf("%d \t",j);
    }

    for(char ch='a'; ch<='z'; ch++){
        printf("%c \t",ch);
    }
    // infinite loop == that keeps on going ,doesn't stop
    // it takes all the memory and program can crash so avoid it.
    for(int l=0; ; l++){
        printf("%d \t",l);
    }

    return 0;
}