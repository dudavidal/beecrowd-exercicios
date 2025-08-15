#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int maiorAB,maiorFinal;
  
    maiorAB = (A + B +abs(A-B))/2;
    maiorFinal = (maiorAB + C +abs(maiorAB-C))/2;
    
    printf("%d eh o maior\n",maiorFinal);
    
    return 0;
}