#include <stdio.h>

#define NUMBERS 3

double ewma(double *values, size_t size, double alpha);

/**
 * 11 - Escreva um programa que calcule a média ponderada exponencial de três valores.
 * O coeficiente de suavização (alfa) será fornecido pelo usuário. Considere a seguinte
 * fórmula:
 *   S = ax + (1 - a)S
 *
 * Mais informações: https://www.wallstreetmojo.com/ewma/
 *
 * Atenção: o primeiro valor deverá ser tratado como a média inicial (sem histórico
 * anterior), e a fórmula será aplicada para os valores subsequentes. Ao final imprima a
 * média ponderada exponencial final.
 */
int main(void)
{
    double values[NUMBERS];
    double alpha;

    printf("Insira o coeficiente de suavizacao (alfa): ");
    scanf("%lf", &alpha);

    for (int i = 0; i < NUMBERS; i++)
    {
        printf("Insira o valor %d: ", i + 1);
        scanf("%lf", values + i);
    }

    printf("EWMA = %lf\n", ewma(values, NUMBERS, alpha));

    return 0;
}

double ewma(double *values, size_t size, double alpha)
{
    double result = values[0];

    for (int i = 1; i < size; i++)
    {
        // S = ax + (1 - a)S
        result = alpha * values[i] + (1 - alpha) * result;
    }

    return result;
}
