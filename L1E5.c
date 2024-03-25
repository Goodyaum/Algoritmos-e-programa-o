#include <stdio.h>
int main()
{
    float a, b, result;
    b = 0;
    printf("Bem vindo ao calculador de operações com dois numeros 18 000. \n");
    printf("Informe o valor da primeira variável: \n");
    scanf( "%f", &a);
    while (b==0)
    {
        printf("Informe o valor da segunda variável: \n");
        scanf( "%f", &b);
    }    
    result = a + b;
    printf("%f + %f = %f \n", a, b, result);
    result = a - b;
    printf("%f - %f = %f \n", a, b, result);
    result = a * b;
    printf("%f x %f = %f \n", a, b, result);
    result = a / b;
    printf("%f : %f = %f \n", a, b, result);
    return 0;
}
