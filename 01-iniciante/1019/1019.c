#include <stdio.h>

int main()
{
    int n,i;
    int horas = 0;
    int minutos = 0;
    int segundos = 0 ;

    scanf("%d",&n); 
    int valorAux = n;
    
    while(valorAux > 0) {
        if (valorAux >= 3600){
            horas ++;
            valorAux -= 3600;
        }
        else if (valorAux>= 60){
            minutos ++;
            valorAux -= 60;
        }
        else {
            segundos = valorAux;
            break;
        } 
    }
   
   printf("%d:%d:%d\n",horas,minutos,segundos);
   
   return 0;
}