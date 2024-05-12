#include<stdio.h>
void price(float value);

int main() {
  float value;
  printf("enter value = ");
  scanf("%f",&value);

  price(value);
  printf("%f\n",value); // value will change in function only
  return 0;
}

void price(float value) {
    value = value + (0.18*value);
    printf("%f\n",value);
}