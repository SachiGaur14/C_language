#include<stdio.h>
// Switch operator
int main() {
    int day;
    char days;
    //m,t,w.T,f,s,S
    printf("Enter day(1-7) = \n");
    scanf("%d",&day);
    
    printf("Enter day(m-S) = \n");
    scanf("%c",&days);

    switch (day) {
        case 1 : printf("Monday \n");
        break;
        case 2 : printf("Tuesday \n");
        break;
        case 3 : printf("Wednesday \n");
        break;
        case 4 : printf("Thursday \n");
        break;
        case 5 : printf("Friday \n");
        break;
        case 6 : printf("Saturday \n");
        break;
        case 7 : printf("Sunday \n");
        break;
        default : printf("Not a valid day !! \n");
        break;
    }

    
    switch (days) {
        case 'm' : printf("Monday \n");
        break;
        case 't' : printf("Tuesday \n");
        break;
        case 'w' : printf("Wednesday \n");
        break;
        case 'T' : printf("Thursday \n");
        break;
        case 'f' : printf("Friday \n");
        break;
        case 's' : printf("Saturday \n");
        break;
        case 'S' : printf("Sunday \n");
        break;
        default : printf("Not a valid day !! \n");
        break;
    }
    return 0;
}