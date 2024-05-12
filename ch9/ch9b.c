#include<stdio.h>
#include<string.h> // details of 3 students.
struct student{
    int rollno;
    float marks;
    char name[50];
};
int main(){
    struct student s1, s2, s3;
    s1.rollno = 25; s2.rollno = 28; s3.rollno = 32;
    s1.marks = 9.7; s2.marks = 9.5; s3.marks = 8.8;
    strcpy(s1.name, "Muskan");
    strcpy(s2.name, "Pulkit");
    strcpy(s3.name, "Shruti");
    printf("Students' names : \t%s\t\t%s\t\t%s\n", s1.name, s2.name, s3.name);
    printf("Students' Rollno : \t%d\t\t%d\t\t%d\n",s1.rollno, s2.rollno, s3.rollno);
    printf("Students' marks : \t%f\t%f\t%f\n",s1.marks, s2.marks, s3.marks);
    return 0;
}