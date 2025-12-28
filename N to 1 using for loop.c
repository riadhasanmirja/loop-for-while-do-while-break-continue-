#include <stdio.h>
int main() {
   
   int N,i;
   
   printf("Enter Your Number N = ");
   scanf("%d",&N);
   
   for(i = N;i >= 1; i = i - 1){
       printf("%d\n",i);
   }
   
    return 0;
}
