/*
 * Conversor de Temperaturas
 * ---------------------------------------------------
 * Programa que converte temperaturas entre as escalas
 * Celsius, Fahrenheit e Kelvin, utilizando switch...case
 * para selecionar a operação escolhida pelo usuário.
 *
 * Relações utilizadas:
 *   F = C * 9/5 + 32
 *   K = C + 273.15
 *   C = (F - 32) * 5/9
 *   K = (F - 32) * 5/9 + 273.15   (F -> K, via Celsius)
 *   C = K - 273.15
 *   F = (K - 273.15) * 9/5 + 32   (K -> F, via Celsius)
 */

#include <stdio.h>

/* ---------- Protótipos das funções de conversão ---------- */
float celsiusParaFahrenheit(float celsius);
float celsiusParaKelvin(float celsius);
float fahrenheitParaCelsius(float fahrenheit);
float fahrenheitParaKelvin(float fahrenheit);
float kelvinParaCelsius(float kelvin);
float kelvinParaFahrenheit(float kelvin);

void exibirMenu(void);

int main(void) {
    int opcao;
    float temperatura, resultado;

    exibirMenu();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Informe a temperatura a ser convertida: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            resultado = celsiusParaFahrenheit(temperatura);
            printf("Resultado: %.2f Celsius = %.2f Fahrenheit\n", temperatura, resultado);
            break;

        case 2:
            resultado = celsiusParaKelvin(temperatura);
            printf("Resultado: %.2f Celsius = %.2f Kelvin\n", temperatura, resultado);
            break;

        case 3:
            resultado = fahrenheitParaCelsius(temperatura);
            printf("Resultado: %.2f Fahrenheit = %.2f Celsius\n", temperatura, resultado);
            break;

        case 4:
            resultado = fahrenheitParaKelvin(temperatura);
            printf("Resultado: %.2f Fahrenheit = %.2f Kelvin\n", temperatura, resultado);
            break;

        case 5:
            resultado = kelvinParaCelsius(temperatura);
            printf("Resultado: %.2f Kelvin = %.2f Celsius\n", temperatura, resultado);
            break;

        case 6:
            resultado = kelvinParaFahrenheit(temperatura);
            printf("Resultado: %.2f Kelvin = %.2f Fahrenheit\n", temperatura, resultado);
            break;

        default:
            printf("Opcao invalida! Por favor, escolha um numero entre 1 e 6.\n");
            break;
    }

    return 0;
}

/* ---------- Implementação das funções ---------- */

void exibirMenu(void) {
    printf("===== CONVERSOR DE TEMPERATURAS =====\n");
    printf("1. Celsius    -> Fahrenheit\n");
    printf("2. Celsius    -> Kelvin\n");
    printf("3. Fahrenheit -> Celsius\n");
    printf("4. Fahrenheit -> Kelvin\n");
    printf("5. Kelvin     -> Celsius\n");
    printf("6. Kelvin     -> Fahrenheit\n");
    printf("======================================\n");
}

float celsiusParaFahrenheit(float celsius) {
    return celsius * 9.0f / 5.0f + 32.0f;
}

float celsiusParaKelvin(float celsius) {
    return celsius + 273.15f;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}

float fahrenheitParaKelvin(float fahrenheit) {
    /* Converte primeiro para Celsius e depois para Kelvin */
    return fahrenheitParaCelsius(fahrenheit) + 273.15f;
}

float kelvinParaCelsius(float kelvin) {
    return kelvin - 273.15f;
}

float kelvinParaFahrenheit(float kelvin) {
    /* Converte primeiro para Celsius e depois para Fahrenheit */
    return celsiusParaFahrenheit(kelvinParaCelsius(kelvin));
}
