#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int j;
    int y = 0;
    int star = 0;

    printf("how many odd numbers you want :");
    scanf("%d", &j);

    for(int i = 1; ; i++) {
    if(i % 2 == 0){
    continue;
    } else {
     // Print spaces before stars
     int space = 0;
    while(space < (j - y - 1)) {
     printf(" ");
     space++;
    }

    // Print stars
    while(star < i){
    printf("*");
    star++;
    }

    star = 0;
    printf("\n");
    y += 1;

    if(y == j)
    break;
    }
    }

    return 0;
}
