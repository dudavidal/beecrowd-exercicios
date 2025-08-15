#include <stdio.h>

int main()
{
    int tempo,velocidade;
    float litros;
   
   scanf("%d",&tempo);
   scanf("%d",&velocidade);
   
   litros = (velocidade * tempo) / 12.0;
   
   printf("%.3f\n",litros);
   
   return 0;
}