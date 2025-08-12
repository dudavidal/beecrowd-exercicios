#include <stdio.h>

int main()
{
    float A;
    float B;
    float media;
    
    scanf("%f",&A);
    scanf("%f",&B);
    
    media = ((A * 3.5) + (B * 7.5)) / 11;
    printf("MEDIA = %.5f\n",media);

    return 0;
}
