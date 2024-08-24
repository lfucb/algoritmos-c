#include <stdio.h>

/**
 * 5 – Escreva um programa que leia o nome completo (nome e sobrenome) e a idade de
 * uma pessoa e depois imprima esses dados da seguinte forma (Olá <nome_completo>,
 * seja bem-vindo ao curso de Algoritmos e Programação Estruturada. Você tem <idade>
 * anos de idade!).
 */
int main(void)
{
    static char name[128];
    unsigned int age;

    printf("Digite seu nome: ");
    scanf("%127[^\n]", name);

    printf("Digite sua idade: ");
    scanf("%u", &age);

    printf(
        "Olá %s, seja bem-vindo ao curso de Algoritmos e Programação Estruturada. "
        "Você tem %d anos de idade!\n",
        name,
        age
    );

    return 0;
}