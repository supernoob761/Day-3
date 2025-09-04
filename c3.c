#include <stdio.h>
#include <stdlib.h>
#include <math.h>


  int isprime(int x){
    if (x<2)
    return 0;
    for (int i = 2 ; i * i <= x ; i++){
    if(x % i == 0)
    return 0;
    }
    return 1;
}

int main(){
int j;
printf("enter a number : ");
scanf("%d",&j);

for(int i = 0; i <= j; i++){
if (isprime(i)){
printf("%d   ",i);
}
}
return 0;
}

