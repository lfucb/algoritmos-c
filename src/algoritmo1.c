#include <stdio.h>

/**
 * 1 – Crie um programa que receba três valores (‘a’, ‘b’ e ‘c’), que são os coeficientes de
 * uma equação do segundo grau, e retorne para o usuário o valor de delta, dado por (b² -
 * 4ac).
 */
int main(void)
{
    int a;
    int b;
    int c;
    int delta;

    fputs("Insira o valor de A, B e C separado por virgula: ", stdout);
    scanf("%d, %d, %d", &a, &b, &c);

    delta = b*b - 4 * a * c;
    printf("Valor de delta: %d", delta);
    return 0;
}