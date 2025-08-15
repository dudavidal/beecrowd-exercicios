#include <stdio.h>

int main()
{
    int n,i;
    int ano = 0;
    int mes = 0;
    int dia = 0 ;

    scanf("%d",&n); 
    int valorAux = n;
    
    while(valorAux > 0) {
        if (valorAux >= 365){
            ano ++;
            valorAux -= 365;
        }
        else if (valorAux>= 30){
            mes ++;
            valorAux -= 30;
        }
        else {
            dia = valorAux;
            break;
        } 
    }
   
   printf("%d ano(s)\n",ano);
   printf("%d mes(es)\n",mes);
   printf("%d dia(s)\n",dia);
   
   return 0;
}