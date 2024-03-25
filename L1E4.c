#include <stdio.h>
int main()
{
    int a, b, c, quadradodasoma;
    printf("Bem vindo ao calculador do quadrado da soma de três valores inteiros 3 000. \n");
    printf("Informe o valor da primeira variável: \n");
    scanf( "%i", &a);
    printf("Informe o valor da segunda variável: \n");
    scanf( "%i", &b);
    printf("Informe o valor da terceira variável: \n");
    scanf( "%i", &c);
    quadradodasoma = ( a + b + c) * ( a + b + c);
    printf("O quadrado da soma dos números inseridos é: %i \n", quadradodasoma);
    return 0;
}
