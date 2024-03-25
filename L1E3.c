#include <stdio.h>
int main()
{
    int a, b, c, somaquadrada;
    printf("Bem vindo ao somador de três quadrados 9 500. \n");
    printf("Informe o valor da primeira variável: \n");
    scanf( "%i", &a);
    printf("Informe o valor da segunda variável: \n");
    scanf( "%i", &b);
    printf("Informe o valor da terceira variável: \n");
    scanf( "%i", &c);
    somaquadrada = ( a * a ) + ( b * b ) + ( c * c);
    printf("A soma dos quadrados dos números inseridos é: %i \n", somaquadrada);
    return 0;
}
