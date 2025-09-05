#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int j;
    int total = 0;
    printf("pick a number for n :");
    scanf("%d",&j);
 for (int i = 1; i <= j; i++)
 {
    total += i;
 }
 printf("resault is : %d " , total);
    return 0;
}