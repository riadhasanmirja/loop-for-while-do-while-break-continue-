#include <stdio.h>

int main() {

    int i = 1, N, sum = 0;

    printf("Enter Your Number : ");
    scanf("%d", &N);

    do {
        printf("%d\n", i);
        sum = sum + i;
        i++;
    } while (i <= N);

    printf("Sum = %d\n", sum);

    return 0;
}
