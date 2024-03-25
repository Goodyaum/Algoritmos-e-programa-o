#include <stdio.h>
int main()
{
    float dist, comb;
    printf("Bem vindo ao calculador de combustível para viagem em veículo que faz 12 km/L 7 000. \n");
    printf("Qual a distância a ser percorrida em Km: \n");
    scanf( "%f", &dist);
    comb = dist / 12;
    printf("Serão necessários %.4f L de combustível. \n", comb);
    return 0;
}
