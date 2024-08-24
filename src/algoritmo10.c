#include <stdio.h>

/**
 * 10 - Crie um programa que solicita ao usuário três valores e seus respectivos pesos. Em
 * seguida, calcule a média ponderada.
 */
int main(void)
{
    float note1;
    float note1_weight;
    float note2;
    float note2_weight;
    float note3;
    float note3_weight;

    printf("Insira a nota 1: ");
    scanf("%f", &note1);
    printf("Insira o peso da nota 1: ");
    scanf("%f", &note1_weight);

    printf("Insira a nota 2: ");
    scanf("%f", &note2);
    printf("Insira o peso da nota 2: ");
    scanf("%f", &note2_weight);

    printf("Insira a nota 3: ");
    scanf("%f", &note3);
    printf("Insira o peso da nota 3: ");
    scanf("%f", &note3_weight);

    float sum = (note1 * note1_weight) + (note2 * note2_weight) + (note3 * note3_weight);
    float total_weights = note1_weight + note2_weight + note3_weight;

    puts("----------------");
    printf("Media ponderada: %.2f\n", sum / total_weights);

    return 0;
}
