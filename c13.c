#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sum=0;
    int total;
    int s; // start
    int f; //finish
    int a; //start point
    printf("pick x :");
    scanf("%d", &s);
    printf("start point : ");
    scanf("%d", &a);
    printf("finish point : ");
    scanf("%d", &f);
    
 for(int i=a ; i<=f ; i++) {
    total = s * i;
    printf("%d * %d = %d\n", s,i,total);
    sum +=total;
 }
printf("the total sum is : %d ", sum);
    return 0;
}