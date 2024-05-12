#include<stdio.h>
#include<string.h>
//passing structure in function.
struct student{
    int rollno;
    float marks;
    char name[50];
};
void printinfo(struct student s1);

int main() {
    struct student s1 = {46, 9.7, "Muskan"};
    printinfo(s1);
    return 0;
}

void printinfo(struct student s1){
    struct student *ptr = &s1;
    printf("name : %s ,rollno : %d , Marks : %f",ptr->name, ptr->rollno, ptr->marks);
}