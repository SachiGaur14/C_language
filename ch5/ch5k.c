#include<stdio.h>
// convert celsius to fahrenheit
float convert(float c);

int main() {
    float c;
    printf("Enter value in celsius = ");
    scanf("%f",&c);
    printf("value in fahrenheit is = %f",convert(c));
    return 0;
}

float convert(float c){
    float f = c * (9.0/5.0) + 32;
    return f;
}