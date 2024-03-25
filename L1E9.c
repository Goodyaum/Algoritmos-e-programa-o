#include <stdio.h>
int main()
{
    float i1, i2, i3, i4, med;
    printf("Bem vindo ao calculador de média de 4 idades 10 000. \n");
    printf("Qual a primeira idade: \n");
    scanf( "%f", &i1);
    printf("Qual a segunda idade: \n");
    scanf( "%f", &i2);
    printf("Qual a terceira idade: \n");
    scanf( "%f", &i3);
    printf("Qual a quarta idade: \n");
    scanf( "%f", &i4);
    med = (i1 + i2 + i3 + i4) / 4;
    printf("A média das idades é %.2f. \n", med);
    return 0;
}
