#include<stdio.h>
#include<string.h>
// array of structure
struct student{
    int rollno;
    float cgpa;
    char name[100];
};
int main(){
    struct student array[2];
    array[0].rollno = 44;
    array[1].rollno = 65;
    printf("rollnos are : %d\n%d\n", array[0].rollno, array[1].rollno);

    return 0;
}