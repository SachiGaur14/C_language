#include<stdio.h>
#include<string.h>
// Structure -- user defined.
struct student{
    int rollno;
    float cgpa;
    char name[100];
};
int main() {
    struct student s1;   // same as int n;
    s1.rollno = 1524;
    s1.cgpa = 9.5;
   // s1.name = "Sachi gaur";  can't be used like this.
   strcpy(s1.name, "Sachi gaur");
   printf("student name = %s\n",s1.name);
   printf("student rollno = %d\n",s1.rollno);
   printf("student cgpa = %f\n",s1.cgpa);

   //initialising a structure
   struct student s2 = {45, 8.4, "Nancy"};
   printf("name = %s , rollno = %d ,cgpa = %f ",s2.name ,s2.rollno ,s2.cgpa);
   printf("\n");

   //pointer to structure
   struct student *ptr;
   ptr = &s2;
   printf("name = %s , rollno = %d ,cgpa = %f \n",(*ptr).name ,(*ptr).rollno ,(*ptr).cgpa);
   //(*ptr).code == ptr -> code .. we can write like this also.
   printf("Name : %s\n",ptr->name);   // arrow operator
   return 0;
}