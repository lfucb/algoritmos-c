#include <stdio.h>

/**
 * 6 - Faça um programa que receba um número informado pelo usuário e calcule o
 * quadrado deste número. Ao final apresente a seguinte mensagem (O número escolhido
 * foi <numero> e o seu quadrado é <numero_quadrado>.)
 */
int main(void)
{
    int number;

    printf("Digite um numero: ");
    scanf("%d", &number);

    printf("O número escolhido foi %d e o seu quadrado é %d.\n", number, number*number);
    return 0;
}