#include <stdio.h>
int main()
{
    float a, b, aux;
    printf("Bem vindo ao trocador de variáveis 3 500. \n");
    printf("Informe o valor da variável A: \n");
    scanf( "%f", &a);
    printf("Informe o valor da variável B: \n");
    scanf( "%f", &b);
    printf("A: %f \n", a);
    printf("B: %f \n", b);
    printf("Efetuando troca... \n");
    aux = a;
    a = b;
    b = aux;
    printf("A: %f \n", a);
    printf("B: %f \n", b);
    return 0;
}
