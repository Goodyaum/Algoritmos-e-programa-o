#include <stdio.h>
int main()
{
    const float pi = 3.14;
    float raio, altura, volume;
    printf("Bem vindo ao calculador de volume de cinlindros 12 000. \n");
    printf("Informe o raio do cilindro: \n");
    scanf( "%f", &raio);
    printf("Informe a altura do cilindro: \n");
    scanf( "%f", &altura);
    volume = pi * raio * raio * altura;
    printf("O volume do cilindro é %f \n", volume);
    return 0;
}
