#include<stdio.h>
// to print prices of 3 things with gst by array
int main() {
    float price[3];
    printf("Enter prices = \n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("price of 1st thing =%f\n",price[0]+(0.18*price[0]));
    printf("price of 2nd thing =%f\n",price[1]+(0.18*price[1]));
    printf("price of 3rd thing =%f\n",price[2]+(0.18*price[2]));

   // initialising an array
   float trueprice[] = {100,200,300};
   printf("\nprice of 1st thing =%f\n",trueprice[0]+(0.18*trueprice[0]));
   printf("price of 2nd thing =%f\n",trueprice[1]+(0.18*trueprice[1]));
   printf("price of 3rd thing =%f\n",trueprice[2]+(0.18*trueprice[2]));

   return 0;
}