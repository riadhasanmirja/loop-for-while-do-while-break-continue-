#include <stdio.h>
int main() {
    
    int i = 1,N;
    
    printf("Enter Your Number :");
    scanf("%d",&N);
    
    do{
        printf("%d * %d = %d\n",i,N,i*N);
        i++;
    }
    while(i <= 10);
    
    return 0;
}
