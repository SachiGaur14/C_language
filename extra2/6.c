#include<stdio.h>
//Program to store employee details such as empid, name, salary, age for 50 employees and display the same.
//Using Structure.
struct emp {
  int empid;
  char name[20];
  float salary;
  int age;
} e[50];
int main() {
    int i;
    for(i=0; i<50; i++){
        printf("Enter %d empid : ", i+1);
        scanf("%d", &e[i].empid);
        printf("Enter %d  employee's name : ", i+1);
        scanf("%s", e[i].name);
        printf("Enter %d employee's salary : ", i+1);
        scanf("%f", &e[i].salary);
        printf("Enter %d employee's age : ", i+1);
        scanf("%d", &e[i].age);
        printf("\n");
    }
    return 0;
}