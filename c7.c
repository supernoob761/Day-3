#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int j;
    int first = 0; 
    int second = 1; 
    int next;

    printf("Enter number: ");
    scanf("%d", &j);

    printf("Sequence: ");

    for (int i = 0; i < j; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    return 0;
}
