#include <stdio.h>
int main() {
    
    int i = 2,N;
    
    printf("Enter Your Number : ");
    scanf("%d",&N);
    
    while(i <= N){
        printf("Even is %d\n",i);
        i = i + 2;
    }
    
    return 0;
}
