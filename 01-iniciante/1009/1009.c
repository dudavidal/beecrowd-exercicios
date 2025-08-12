#include <stdio.h>

int main(){
    char nome[20];
    double salario;
    double montante;
    double total;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &montante);

    total = salario + (0.15 * montante);
    printf("TOTAL = R$ %.2lf\n", total);
     

    return 0;
}
