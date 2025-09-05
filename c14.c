#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char* days[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int selected;

    printf("Select a day (1=Monday, ..., 7=Sunday): ");
    scanf("%d", &selected);

    for(int i = 0; i < 7; i++) {
        printf("%s\n", days[(selected - 1 + i) % 7]);
    }

    return 0;
}