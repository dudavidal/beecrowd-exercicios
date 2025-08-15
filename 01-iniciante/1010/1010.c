#include <stdio.h>

int main()
{
    int codigoP1, qtdP1,codigoP2, qtdP2;
    float valorP1,valorP2;
    
    scanf("%d %d %f",&codigoP1,&qtdP1,&valorP1);
    scanf("%d %d %f",&codigoP2,&qtdP2,&valorP2);

    float totalP1 = qtdP1 * valorP1;
    float totalP2 = qtdP2 * valorP2;
    float totalFinal = totalP1 + totalP2;

    printf("VALOR A PAGAR: R$ %.2f\n",totalFinal);

    return 0;
}