#include <stdio.h>
int main()
{
    int idd, resul;
    printf("Bem vindo ao calculador do dobro e do triplo da idade 23 000. \n");
    printf("Qual a sua idade: \n");
    scanf( "%i", &idd);
    printf("Calculando... \n");
    resul = idd * 2;
    printf("O dobro da idade é: %i \n", resul);
    resul = idd * 3;
    printf("O triplo da idade é: %i \n", resul);
    return 0;
}
