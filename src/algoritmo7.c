#include <stdio.h>

/**
 * 7 –Crie um programa que calcule a circunferência de um círculo. Utilize uma constante
 * para o valor de Pi. O programa deve apresentar a seguinte mensagem (A circunferência
 * do círculo é: <circunferencia>).
 */
int main(void)
{
    double radius;
    const double PI = 3.14159265359;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &radius);

    printf("A circunferência do círculo é: %lf\n", 2 * PI * radius);
    return 0;
}