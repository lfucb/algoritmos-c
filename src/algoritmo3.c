#include <stdio.h>
#include <math.h>

/**
 * 3 - Crie um programa que peça ao usuário para inserir uma base e um expoente, e
 * calcule a potência correspondente.
 */
int main(void)
{
    int base;
    int exponent;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &exponent);

    printf("%d^%d = %d", base, exponent, (int) pow(base, exponent));
    return 0;
}