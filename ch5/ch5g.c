#include<stdio.h>
#include<math.h>
float sqar(float side);
float recar(float a, float b);
float circlear(float r);
float power(float a, float b);

int main() {
float a,b,r,side;
scanf("%f",&a);
scanf("%f",&b);
printf("Area of rectangle is = %f\n",recar(a,b));
printf("a to the power of b = %f\n",power(a,b));
scanf("%f",&side);
printf("area of square = %f\n",sqar(side));
scanf("%f",&r);
printf("Area of circle = %f\n",circlear(r));

return 0;
}

float sqar(float side) {
    return side*side;
}
float recar(float a,float b){
    return a*b;
}
float circlear(float r){
    return 3.14*r*r;
}
float power(float a,float b){
    return pow(a,b);
}