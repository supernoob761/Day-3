#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

int num; 
int n; 
int j;
printf("enter number :");
scanf("%d" , &num);
for(n = 2 ; n <=num ; n++){

 for(j = 2 ; j < n ; j++ )
       if(n % j == 0)
        break;


       if(n==j)
        printf("%d\n",n);


  }
return 0 ;
}
