#include<stdio.h>
#include<stdlib.h>
// realloc function.
// allocate memory for 5 then increase it to 8.
int main() {
   int *ptr;
   ptr = (int*)malloc(5 * sizeof(int));
   printf("Enter number :");
   for(int i=0; i<5; i++){
    scanf("%d",&ptr[i]);
   }
   
   ptr = realloc(ptr, 8);
   printf("Enter number :");
   for(int i=0; i<8; i++){
    scanf("%d",&ptr[i]);
   }

   for(int i=0; i<8; i++){
    printf(" number %d : %d\n",i ,ptr[i]);
   }
   free(ptr);

   return 0;
}