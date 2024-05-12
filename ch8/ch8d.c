#include<stdio.h>
// string using pointers
int main() {
    char *change = "Hello world";
    puts(change);
    change = "hello";
    puts(change);
    // this way it can be modified.

    char nochange[] = "hello world";
    puts(nochange);
   // it cannot be modified.

   return 0;
}