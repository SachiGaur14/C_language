#include<stdio.h>
// to show use of union.
union student{
    char name[20];
    int rollno;
    float marks;
};
int main() {
    union student s;
    printf("Enter name : ");
    scanf("%s",s.name);
    printf("Enter roll number : ");
    scanf("%d",&s.rollno);
    printf("Enter marks : ");
    scanf("%f",&s.marks);

    return 0;
}