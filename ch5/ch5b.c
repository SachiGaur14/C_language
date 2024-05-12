#include<stdio.h>
//2 functions- one for hello and one for goodbye.
void h();
void gb();

int main() {
    h();
    gb();
    return 0;
}

void h() {
    printf("Hello\n");
}
void gb() {
    printf("Goodbye\n");
}