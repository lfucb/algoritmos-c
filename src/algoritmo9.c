#include <stdio.h>

/**
 * 9 – Escreva um programa que calcule o valor total a ser pago pelo combustível. O
 * programa deve definir uma constante para o preço do combustível por litro (R$ 5.79) e
 * pedir ao usuário a quantidade de litros abastecidos.
 */
int main(void)
{
    const float FUEL_PRICE = 5.79;
    unsigned int liters;

    printf("Insira a quantidade de litros: ");
    scanf("%u", &liters);

    printf("Preco total: R$ %.2f", liters * FUEL_PRICE);

    return 0;
}