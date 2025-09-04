#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int j;
    int reversed = 0; 
    int digit;

    printf("Enter a number: ");
    scanf("%d", &j);

    while (j != 0) {
        digit = j % 10;          
        reversed = reversed * 10 + digit; 
        j = j / 10;         
    }

    printf("%d", reversed);

    return 0;
}