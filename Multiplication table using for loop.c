#include <stdio.h>
int main() {
   
   int N,i;
   
   printf("Enter Your Number N = ");
   scanf("%d",&N);
   
   for(i = 1;i <= 10;i++ ){
       printf("%d * %d = %d\n",N,i,N*i);
   }
   
    return 0;
}
