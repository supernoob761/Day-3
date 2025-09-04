#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int j;
    printf("Enter a number: ");
    scanf("%d", &j);

    int root = (int)sqrt(j);

    for (int i = 1; i <= root; i++) {
    if (j % i == 0) {
     printf("%d ", i);
    }
    }

    for (int i = root; i >= 1; i--) {
     if (j % i == 0 && j / i != i) {
printf("%d ", j / i);
    }
}

    return 0;
}
