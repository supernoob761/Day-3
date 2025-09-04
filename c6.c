#include <stdio.h>
#include <math.h>

int main() {
    int j;
    printf("Enter a number: ");
    scanf("%d", &j);

    int root = (int)sqrt(j);

    // print small factors
    for (int i = 1; i <= root; i++) {
    if (j % i == 0) {
     printf("%d ", i);
    }
    }

    // print big factors
    for (int i = root; i >= 1; i--) {
     if (j % i == 0 && j / i != i) {
printf("%d ", j / i);
    }
}

    return 0;
}
