#include <stdio.h>

/**
 * 2 –Crie um programa que leia dois números de ponto flutuante, calcule e exiba a soma,
 * subtração, multiplicação e divisão deles.
 */
int main(void)
{
    float number1;
    float number2;

    printf("Digite os numeros separados por virgula: ");
    scanf("%f, %f", &number1, &number2);

    printf("%f + %f\t= %f\n", number1, number2, number1 + number2);
    printf("%f - %f\t= %f\n", number1, number2, number1 - number2);
    printf("%f * %f\t= %f\n", number1, number2, number1 * number2);
    printf("%f / %f\t= %f\n", number1, number2, number1 / number2);
    return 0;
}