#include <stdio.h>

/**
 * 10 - Crie um programa que solicita ao usuário três valores e seus respectivos pesos. Em
 * seguida, calcule a média ponderada.
 */
int main(void)
{
    float note1;
    int note1_weight;
    float note2;
    int note2_weight;
    float note3;
    int note3_weight;

    printf("Insira a nota 1: ");
    scanf("%f", &note1);
    printf("Insira o peso da nota 1: ");
    scanf("%d", &note1_weight);

    printf("Insira a nota 2: ");
    scanf("%f", &note2);
    printf("Insira o peso da nota 2: ");
    scanf("%d", &note2_weight);

    printf("Insira a nota 3: ");
    scanf("%f", &note3);
    printf("Insira o peso da nota 3: ");
    scanf("%d", &note3_weight);

    float sum = (note1 * note1_weight) + (note2 * note2_weight) + (note3_weight * note3_weight);
    int total_weights = note1_weight + note2_weight + note3_weight;

    puts("----------------");
    printf("Media ponderada: %.2f\n", sum / total_weights);

    return 0;
}