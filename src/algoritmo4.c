#include <stdio.h>
#include <string.h>

/**
 * 4 - Escreva um programa que leia uma string (conjunto de caracteres) do
 * usuário e copie-a para outra string. Em seguida, exiba a string copiada.
 */
int main(void)
{
    static char user_input[513];
    static char buffer_copy[513];

    printf("Digite um texto: ");
    fgets(user_input, sizeof user_input - 1, stdin);

    strncpy(buffer_copy, user_input, sizeof buffer_copy - 1);

    printf("Copia do texto: %s", buffer_copy);

    return 0;
}