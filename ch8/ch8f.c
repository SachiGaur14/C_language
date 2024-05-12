#include<stdio.h>
#include<string.h>
// strcpy(newstr, oldstr)--copies value of old string to new string.
//strcat(str1, str2)--concatenates/add str1 with str2.(no spaces in between)
// strcmp(str1, str2)--compare 2 strings and return a value.
// 0 means equal, +ve value mean str1>str2, -ve value mean str1<str2.
int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[] = "Hello";
    printf("%s\t%s\n", str1, str2);
    strcpy(str1, str2); // str1 = world
    puts(str1); 
    puts(str2);  
    
    strcat(str2, str3); // str2 = Worldhello
    puts(str2); 

    printf("%d\n",strcmp(str1, str2));
    printf("%d\n",strcmp(str2, str3));

    return 0;
}