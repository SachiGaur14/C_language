#include<stdio.h>
// typedef is used to create alias or nickname.
typedef struct student {
   char name[20];
   int rollno;
   float cgpa;
} stu;
int main() {
    stu s1 = {"Ram", 25, 7.8};
    printf("%s\t%d\t%f\n",s1.name, s1.rollno, s1.cgpa);

    return 0;
}