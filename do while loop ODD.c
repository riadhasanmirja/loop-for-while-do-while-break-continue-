#include <stdio.h>
int main() {
    
    int i = 1,N;
    
    printf("Enter Your Number :");
    scanf("%d",&N);
    
    do{
        printf("ODD is %d\n",i);
        i = i + 2;
    }
    while(i <= N);
    
    return 0;
}
