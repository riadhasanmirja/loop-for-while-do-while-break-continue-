#include <stdio.h>
int main() {
   
   int N,i;
   
   printf("Enter Your Number N = ");
   scanf("%d",&N);
   
   for(i = 1;i <= N; i = i + 2){
       printf("%d\n",i);
   }
   
    return 0;
}
