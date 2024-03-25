#include <stdio.h>
int main()
{
    float usd, brl, cdr;
    printf("Bem vindo ao conversor de reais para dolar 5 000. \n");
    printf("Quantos reais está valendo um dolar: \n");
    scanf( "%f", &cdr);
    printf("Quantos reais iremos vender hoje: \n");
    scanf( "%f", &brl);
    usd = brl / cdr;
    printf("Cada dolar está valendo R$ %.2f. \n", cdr);
    printf("Iremos vender R$ %.2f. \n", brl);
    printf("Isso resultará em $ %.2f. \n", usd);
    return 0;
}
