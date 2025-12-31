#include <stdio.h>
int main() {
    
    int i = 1,N;
    
    printf("Enter Your Number :");
    scanf("%d",&N);
    
    do{
        printf("%d\n",i);
        i++;
    } 
    while(i <= N);

    return 0;
}
