#include <stdio.h>

/**
 * 8 - Faça um programa que calcule o valor a ser pago em uma conta de energia elétrica,
 * sabendo que o preço por KWh é fixo (0.50) e deve ser armazenado em uma constante. O
 * programa deve apresentar a seguinte mensagem (O valor da conta de energia é: R$
 * <valor>). Observação: o valor final deve possuir três casas decimais.
 */
int main(void)
{
    const float KWH_PRICE = 0.50;
    float kw;

    printf("Insira os KW: ");
    scanf("%f", &kw);

    printf("O valor da conta de energia é: R$ %.3f\n", kw * KWH_PRICE);
    return 0;
}