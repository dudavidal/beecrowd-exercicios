#include <stdio.h>

int main()
{
    int n,i;
    int nota100 = 0;
    int nota50 = 0;
    int nota20 = 0 ;
    int nota10 = 0;
    int nota5 = 0;
    int nota2 = 0;
    int nota1 = 0;
    
    scanf("%d",&n); 
    int valorAux = n;
    
    while(valorAux > 0) {
        if (valorAux >= 100){
            nota100 ++;
            valorAux -= 100;
        }
        else if (valorAux>= 50){
            nota50 ++;
            valorAux -= 50;
        }
        else if (valorAux >= 20){
            nota20 ++;
            valorAux -= 20;
        } 
        else if (valorAux >= 10){
            nota10 ++;
            valorAux -= 10;
        } 
        else if (valorAux >= 5){
            nota5 ++;
            valorAux -= 5;
        } 
        else if (valorAux >= 2){
            nota2 ++;
            valorAux -= 2;
        } 
        else if (valorAux >= 1){
            nota1 ++;
            valorAux -= 1;
        } 
    }
   
   printf("%d\n",n);
   printf("%d nota(s) de R$ 100,00\n",nota100);
   printf("%d nota(s) de R$ 50,00\n",nota50);
   printf("%d nota(s) de R$ 20,00\n",nota20);
   printf("%d nota(s) de R$ 10,00\n",nota10);
   printf("%d nota(s) de R$ 5,00\n",nota5);
   printf("%d nota(s) de R$ 2,00\n",nota2);
   printf("%d nota(s) de R$ 1,00\n",nota1);
   
   return 0;
}