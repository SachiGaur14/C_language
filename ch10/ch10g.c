// program to input student information from a user and enter it to a file.
#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("name is : ");
    scanf("%s", name);
    printf("age is : ");
    scanf("%d", &age);
    printf("cgpa is : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name is %s\n", name);
    fprintf(fptr, "Student age is %d\n", age);
    fprintf(fptr, "Student cgpa is %f\n", cgpa);

    fclose(fptr);
    return 0;
}