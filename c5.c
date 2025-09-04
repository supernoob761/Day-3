#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int j;
    int y=0;
    printf("enter a number :");
    scanf("%d",&j);
 
    for(int i=1; i ;i++ )
    if(i % 2 == 0)
    continue;
    else{
        printf("%d, ", i);
        y +=1;
        if(y==j)
        break;
    }
    return 0;
}