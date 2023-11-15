#include <stdio.h>

int main()
{
    float temperaturaFahrenheit, temperaturaCelsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);
    temperaturaCelsius = (5 * (temperaturaFahrenheit - 32)) / 9;
    printf("Temperatura em Fahrenheit: %.2f\n", temperaturaFahrenheit);
    printf("Temperatura em Celsius: %.2f\n", temperaturaCelsius);

    return 0;
}
