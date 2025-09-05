#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    float j; 
    float sum = 0;
    int count = 0;

    printf("Enter positive numbers (0 to stop):\n");

    while (1) {
        scanf("%f", &j);

        if (j == 0)
            break;
        if (j < 0)      
            continue;

        sum += j;
        count++;
    }

    if (count)
        printf("Average = %.2f\n", sum / count);
    else
        printf("No numbers entered.\n");

    return 0;
}
