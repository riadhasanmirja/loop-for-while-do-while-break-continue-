#include <stdio.h>
int main() {

    int i = 1,N,sum = 0;

    printf("Enter Your Number N = ");
    scanf("%d", &N);

    while(i <= N) {
        sum = sum + i;
        i++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
