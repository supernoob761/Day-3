#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int j;
    int n; 
do{
    int total = 1;
    printf("pick a number for X:");
    scanf("%d",&j);
    printf("pick a number for n:");
    scanf("%d",&n);
    if(n==0)
    total = 1;
    else{
 for (int i=0 ; i < n; i++)
 {
    total *= j;
 }
}
 printf("resault is : %d\n " , total);
    
}while(1);
return 0;
}