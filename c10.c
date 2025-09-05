#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int j;
    do{
    printf("Enter password length: ");
    scanf("%d", &j);

    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

    srand(time(NULL));

    printf("Random password: ");
    for (int i = 0; i < j; i++) {
        int index = rand() % (sizeof(chars) - 1);
        printf("%c", chars[index]);
    }

    printf("\n");
}while(1);
    return 0;
}
