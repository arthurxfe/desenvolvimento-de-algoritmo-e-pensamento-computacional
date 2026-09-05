#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
    ============================================================
    ATIVIDADE PRÁTICA - CALCULADORA EM C
    Disciplina: Desenvolvimento de Algoritmos e Pensamento Computacional
    ============================================================

    Programa desenvolvido em linguagem C contendo 20 operações
    matemáticas, utilizando funções, estruturas condicionais,
    estruturas de repetição, entrada e saída de dados e a
    biblioteca math.h.
*/


// ============================================================
// 1 - SOMA
// ============================================================

double somar(double a, double b) {
    return a + b;
}


// ============================================================
// 2 - SUBTRAÇÃO
// ============================================================

double subtrair(double a, double b) {
    return a - b;
}


// ============================================================
// 3 - MULTIPLICAÇÃO
// ============================================================

double multiplicar(double a, double b) {
    return a * b;
}


// ============================================================
// 4 - DIVISÃO
// ============================================================

double dividir(double a, double b) {
    return a / b;
}


// ============================================================
// 5 - POTENCIAÇÃO
// ============================================================

double potencia(double base, double expoente) {
    return pow(base, expoente);
}


// ============================================================
// 6 - RAIZ QUADRADA
// ============================================================

double raizQuadrada(double numero) {
    return sqrt(numero);
}


// ============================================================
// 7 - RAIZ CÚBICA
// ============================================================

double raizCubica(double numero) {
    return cbrt(numero);
}


// ============================================================
// 8 - SENO
// ============================================================

double seno(double graus) {
    double radianos = graus * M_PI / 180.0;
    return sin(radianos);
}


// ============================================================
// 9 - COSSENO
// ============================================================

double cosseno(double graus) {
    double radianos = graus * M_PI / 180.0;
    return cos(radianos);
}


// ============================================================
// 10 - TANGENTE
// ============================================================

double tangente(double graus) {
    double radianos = graus * M_PI / 180.0;
    return tan(radianos);
}


// ============================================================
// 11 - LOGARITMO NATURAL
// ============================================================

double logaritmoNatural(double numero) {
    return log(numero);
}


// ============================================================
// 12 - LOGARITMO BASE 10
// ============================================================

double logaritmoBase10(double numero) {
    return log10(numero);
}


// ============================================================
// 13 - VALOR ABSOLUTO
// ============================================================

double valorAbsoluto(double numero) {
    return fabs(numero);
}


// ============================================================
// 14 - PORCENTAGEM
// ============================================================

double porcentagem(double valor, double percentual) {
    return (valor * percentual) / 100.0;
}


// ============================================================
// 15 - MÉDIA ARITMÉTICA
// ============================================================

double mediaAritmetica(double a, double b, double c) {
    return (a + b + c) / 3.0;
}


// ============================================================
// 16 - GRAUS PARA RADIANOS
// ============================================================

double grausParaRadianos(double graus) {
    return graus * M_PI / 180.0;
}


// ============================================================
// 17 - RADIANOS PARA GRAUS
// ============================================================

double radianosParaGraus(double radianos) {
    return radianos * 180.0 / M_PI;
}


// ============================================================
// 18 - ÁREA DO CÍRCULO
// ============================================================

double areaCirculo(double raio) {
    return M_PI * raio * raio;
}


// ============================================================
// 19 - ÁREA DO RETÂNGULO
// ============================================================

double areaRetangulo(double base, double altura) {
    return base * altura;
}


// ============================================================
// 20 - HIPOTENUSA
// ============================================================

double calcularHipotenusa(double catetoA, double catetoB) {
    return hypot(catetoA, catetoB);
}


// ============================================================
// FUNÇÃO PRINCIPAL
// ============================================================

int main() {

    int opcao;
    double num1, num2, num3;
    char continuar;

    do {

        // ========================================================
        // MENU
        // ========================================================

        printf("\n");
        printf("==============================================================\n");
        printf("                 CALCULADORA EM C\n");
        printf("==============================================================\n");

        printf(" 1 - Soma\n");
        printf(" 2 - Subtracao\n");
        printf(" 3 - Multiplicacao\n");
        printf(" 4 - Divisao\n");
        printf(" 5 - Potenciacao\n");
        printf(" 6 - Raiz quadrada\n");
        printf(" 7 - Raiz cubica\n");
        printf(" 8 - Seno\n");
        printf(" 9 - Cosseno\n");
        printf("10 - Tangente\n");
        printf("11 - Logaritmo natural\n");
        printf("12 - Logaritmo base 10\n");
        printf("13 - Valor absoluto\n");
        printf("14 - Porcentagem\n");
        printf("15 - Media aritmetica\n");
        printf("16 - Graus para radianos\n");
        printf("17 - Radianos para graus\n");
        printf("18 - Area do circulo\n");
        printf("19 - Area do retangulo\n");
        printf("20 - Hipotenusa\n");
        printf(" 0 - Sair\n");

        printf("==============================================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        // ========================================================
        // SWITCH / CASE
        // ========================================================

        switch (opcao) {

            // ----------------------------------------------------
            // 1 - SOMA
            // ----------------------------------------------------

            case 1:

                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                printf("Resultado: %.2f\n",
                       somar(num1, num2));

                break;


            // ----------------------------------------------------
            // 2 - SUBTRACAO
            // ----------------------------------------------------

            case 2:

                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                printf("Resultado: %.2f\n",
                       subtrair(num1, num2));

                break;


            // ----------------------------------------------------
            // 3 - MULTIPLICACAO
            // ----------------------------------------------------

            case 3:

                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                printf("Resultado: %.2f\n",
                       multiplicar(num1, num2));

                break;


            // ----------------------------------------------------
            // 4 - DIVISAO
            // ----------------------------------------------------

            case 4:

                printf("\nDigite o dividendo: ");
                scanf("%lf", &num1);

                printf("Digite o divisor: ");
                scanf("%lf", &num2);

                if (num2 == 0) {

                    printf("Erro: divisao por zero nao e permitida!\n");

                } else {

                    printf("Resultado: %.2f\n",
                           dividir(num1, num2));
                }

                break;


            // ----------------------------------------------------
            // 5 - POTENCIA
            // ----------------------------------------------------

            case 5:

                printf("\nDigite a base: ");
                scanf("%lf", &num1);

                printf("Digite o expoente: ");
                scanf("%lf", &num2);

                printf("Resultado: %.2f\n",
                       potencia(num1, num2));

                break;


            // ----------------------------------------------------
            // 6 - RAIZ QUADRADA
            // ----------------------------------------------------

            case 6:

                printf("\nDigite o numero: ");
                scanf("%lf", &num1);

                if (num1 < 0) {

                    printf("Erro: nao existe raiz quadrada real de numero negativo!\n");

                } else {

                    printf("Resultado: %.2f\n",
                           raizQuadrada(num1));
                }

                break;


            // ----------------------------------------------------
            // 7 - RAIZ CUBICA
            // ----------------------------------------------------

            case 7:

                printf("\nDigite o numero: ");
                scanf("%lf", &num1);

                printf("Resultado: %.2f\n",
                       raizCubica(num1));

                break;


            // ----------------------------------------------------
            // 8 - SENO
            // ----------------------------------------------------

            case 8:

                printf("\nDigite o angulo em graus: ");
                scanf("%lf", &num1);

                printf("Seno de %.2f graus = %.4f\n",
                       num1,
                       seno(num1));

                break;


            // ----------------------------------------------------
            // 9 - COSSENO
            // ----------------------------------------------------

            case 9:

                printf("\nDigite o angulo em graus: ");
                scanf("%lf", &num1);

                printf("Cosseno de %.2f graus = %.4f\n",
                       num1,
                       cosseno(num1));

                break;


            // ----------------------------------------------------
            // 10 - TANGENTE
            // ----------------------------------------------------

            case 10:

                printf("\nDigite o angulo em graus: ");
                scanf("%lf", &num1);

                /*
                    A tangente possui valores indefinidos em
                    determinados angulos, como 90 graus.
                */

                if (fabs(cos(grausParaRadianos(num1))) < 1e-10) {

                    printf("Erro: tangente indefinida para esse angulo.\n");

                } else {

                    printf("Tangente de %.2f graus = %.4f\n",
                           num1,
                           tangente(num1));
                }

                break;


            // ----------------------------------------------------
            // 11 - LOGARITMO NATURAL
            // ----------------------------------------------------

            case 11:

                printf("\nDigite um numero: ");
                scanf("%lf", &num1);

                if (num1 <= 0) {

                    printf("Erro: o logaritmo natural exige numero maior que zero.\n");

                } else {

                    printf("ln(%.2f) = %.4f\n",
                           num1,
                           logaritmoNatural(num1));
                }

                break;


            // ----------------------------------------------------
            // 12 - LOGARITMO BASE 10
            // ----------------------------------------------------

            case 12:

                printf("\nDigite um numero: ");
                scanf("%lf", &num1);

                if (num1 <= 0) {

                    printf("Erro: o logaritmo exige numero maior que zero.\n");

                } else {

                    printf("log10(%.2f) = %.4f\n",
                           num1,
                           logaritmoBase10(num1));
                }

                break;


            // ----------------------------------------------------
            // 13 - VALOR ABSOLUTO
            // ----------------------------------------------------

            case 13:

                printf("\nDigite um numero: ");
                scanf("%lf", &num1);

                printf("|%.2f| = %.2f\n",
                       num1,
                       valorAbsoluto(num1));

                break;


            // ----------------------------------------------------
            // 14 - PORCENTAGEM
            // ----------------------------------------------------

            case 14:

                printf("\nDigite o valor: ");
                scanf("%lf", &num1);

                printf("Digite o percentual: ");
                scanf("%lf", &num2);

                printf("%.2f%% de %.2f = %.2f\n",
                       num2,
                       num1,
                       porcentagem(num1, num2));

                break;


            // ----------------------------------------------------
            // 15 - MEDIA ARITMETICA
            // ----------------------------------------------------

            case 15:

                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                printf("Digite o terceiro numero: ");
                scanf("%lf", &num3);

                printf("Media = %.2f\n",
                       mediaAritmetica(num1, num2, num3));

                break;


            // ----------------------------------------------------
            // 16 - GRAUS PARA RADIANOS
            // ----------------------------------------------------

            case 16:

                printf("\nDigite o valor em graus: ");
                scanf("%lf", &num1);

                printf("%.2f graus = %.4f radianos\n",
                       num1,
                       grausParaRadianos(num1));

                break;


            // ----------------------------------------------------
            // 17 - RADIANOS PARA GRAUS
            // ----------------------------------------------------

            case 17:

                printf("\nDigite o valor em radianos: ");
                scanf("%lf", &num1);

                printf("%.4f radianos = %.2f graus\n",
                       num1,
                       radianosParaGraus(num1));

                break;


            // ----------------------------------------------------
            // 18 - AREA DO CIRCULO
            // ----------------------------------------------------

            case 18:

                printf("\nDigite o raio do circulo: ");
                scanf("%lf", &num1);

                if (num1 < 0) {

                    printf("Erro: o raio nao pode ser negativo.\n");

                } else {

                    printf("Area do circulo = %.2f\n",
                           areaCirculo(num1));
                }

                break;


            // ----------------------------------------------------
            // 19 - AREA DO RETANGULO
            // ----------------------------------------------------

            case 19:

                printf("\nDigite a base: ");
                scanf("%lf", &num1);

                printf("Digite a altura: ");
                scanf("%lf", &num2);

                if (num1 < 0 || num2 < 0) {

                    printf("Erro: base e altura nao podem ser negativas.\n");

                } else {

                    printf("Area do retangulo = %.2f\n",
                           areaRetangulo(num1, num2));
                }

                break;


            // ----------------------------------------------------
            // 20 - HIPOTENUSA
            // ----------------------------------------------------

            case 20:

                printf("\nDigite o primeiro cateto: ");
                scanf("%lf", &num1);

                printf("Digite o segundo cateto: ");
                scanf("%lf", &num2);

                if (num1 < 0 || num2 < 0) {

                    printf("Erro: os catetos nao podem ser negativos.\n");

                } else {

                    printf("Hipotenusa = %.2f\n",
                           calcularHipotenusa(num1, num2));
                }

                break;


            // ----------------------------------------------------
            // 0 - SAIR
            // ----------------------------------------------------

            case 0:

                printf("\nEncerrando a calculadora...\n");

                continuar = 'N';

                break;


            // ----------------------------------------------------
            // OPCAO INVALIDA
            // ----------------------------------------------------

            default:

                printf("\nErro: opcao invalida!\n");
                printf("Digite uma opcao entre 0 e 20.\n");

                break;
        }


        // ========================================================
        // CONTINUAR
        // ========================================================

        if (opcao != 0) {

            printf("\nDeseja realizar outra operacao? (S/N): ");
            scanf(" %c", &continuar);
        }

    } while (continuar == 'S' || continuar == 's');


    printf("\n==============================================================\n");
    printf("             CALCULADORA ENCERRADA\n");
    printf("==============================================================\n");

    return 0;
}