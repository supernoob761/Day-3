#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int j;
    int total = 1;
    printf("Enter an amount: ");
    scanf("%d", &j);
    if (j == 0) {
            total = 1;
        }
    for (int i = 1; i <= j; i++) {
        total *= i;
    }
    printf("Result is: %d\n", total);
    return 0;
}
    