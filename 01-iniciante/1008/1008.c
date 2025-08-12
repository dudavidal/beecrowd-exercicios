#include <stdio.h>

int main(){
    int numeroFuncioanrio;
    int numeroHoras;
    float qtdRecebe;
    float salario;

    scanf("%d", &numeroFuncioanrio);
    scanf("%d", &numeroHoras);
    scanf("%f", &qtdRecebe);

    salario = numeroHoras * qtdRecebe;
    printf("NUMBER = %d\n", numeroFuncioanrio);
    printf("SALARY = U$ %.2f\n", salario); 

    return 0;
}
