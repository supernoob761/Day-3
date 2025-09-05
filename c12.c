#include <stdio.h>

int main() {
    int j;
    printf("Enter an integer: ");
    scanf("%d", &j);
    int array[j];

    for (int i = 0; i < j; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < j-1; i++)
        for(int k = 0; k < j-1; k++)
            if(array[k] > array[k+1]) {
                int temp = array[k];
                array[k] = array[k+1];
                array[k+1] = temp;
            }
    printf("Sorted array: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}