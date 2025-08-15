#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 3.14159;
    double A,B,C;
    double areaTriangulo,areaCirculo,areaTrapezio,areaQuadrado,areaRetangulo;
    
    scanf("%lf %lf %lf",&A,&B,&C);
    
    areaTriangulo = (A * C)/2;
    areaCirculo = pi * (pow(C,2));
    areaTrapezio = ((A + B)*C)/2;
    areaQuadrado = B * B;
    areaRetangulo = A * B;

    
    printf("TRIANGULO: %.3lf\n",areaTriangulo);
    printf("CIRCULO: %.3lf\n",areaCirculo);
    printf("TRAPEZIO: %.3lf\n",areaTrapezio);
    printf("QUADRADO: %.3lf\n",areaQuadrado);
    printf("RETANGULO: %.3lf\n",areaRetangulo);
    
    return 0;
}