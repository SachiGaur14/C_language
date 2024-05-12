#include<stdio.h>
// to store address of 5 people.
struct address {
    int houseno;
    int block;
    char city[25];
    char state[30];
};
void printadd(struct address ad);
int main() {
    struct address ad[5];
    printf("enter info of 1st person:  ");
    scanf("%d",&ad[0].houseno);
    scanf("%d",&ad[0].block);
    scanf("%s",ad[0].city);
    scanf("%s",ad[0].state);

    printf("enter info of 2nd person:  ");
    scanf("%d",&ad[1].houseno);
    scanf("%d",&ad[1].block);
    scanf("%s",ad[1].city);
    scanf("%s",ad[1].state);
    
    printf("enter info of 3rd person:  ");
    scanf("%d",&ad[2].houseno);
    scanf("%d",&ad[2].block);
    scanf("%s",ad[2].city);
    scanf("%s",ad[2].state);
    
    printf("enter info of 4th person:  ");
    scanf("%d",&ad[3].houseno);
    scanf("%d",&ad[3].block);
    scanf("%s",ad[3].city);
    scanf("%s",ad[3].state);
    
    printf("enter info of 5th person:  ");
    scanf("%d",&ad[4].houseno);
    scanf("%d",&ad[4].block);
    scanf("%s",ad[4].city);
    scanf("%s",ad[4].state);

    printadd(ad[0]);
    printadd(ad[1]);
    printadd(ad[2]);
    printadd(ad[3]);
    printadd(ad[4]);
    
    return 0;
}

void printadd(struct address ad){
    printf("Address is : %d, %d, %s, %s\n",ad.houseno, ad.block, ad.city, ad.state);
}