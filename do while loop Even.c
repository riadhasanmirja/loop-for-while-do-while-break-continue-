#include <stdio.h>
int main() {
    
    int i = 2,N;
    
    printf("Enter Your Number :");
    scanf("%d",&N);
    
    do{
        printf("Even is %d\n",i);
        i = i + 2;
    }
    while(i <= N);
    
    return 0;
}
