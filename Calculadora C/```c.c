```c
#include <stdio.h>          // Biblioteca principal: printf e scanf
#include <math.h>           // Biblioteca das operações matemáticas
#include <stdlib.h>         // Biblioteca de controle

/*
    CALCULADORA CIENTÍFICA EM C

    A calculadora segue a mesma base do Flowgorithm,
    utilizando DO, SWITCH e CASE.
*/

int main() {

    int opcao;
    int num3, num4;
    int i;
    char continuar;

    double num1, num2, resultado;
    double numeros[100];
    int quantidade;

    do {

        // =========================================================
        // MENU
        // =========================================================

        printf("\n");
        printf("=========================================================================\n");
        printf("|                         CALCULADORA CIENTIFICA                       |\n");
        printf("=========================================================================\n");
        printf("| OPCOES DISPONIVEIS:\n");
        printf("-------------------------------------------------------------------------\n");
        printf("| 1- Adicao (+)        | 2- Subtracao (-)     | 3- Multiplicacao (*)   |\n");
        printf("| 4- Divisao (/)       | 5- Potencia (^)      | 6- Raiz (sqrt)         |\n");
        printf("| 7- Porcentagem (%%)   | 8- Seno (sin)        | 9- Cosseno (cos)       |\n");
        printf("| 10- Tangente (tan)   | 11- Pi (PI)          | 12- Fatorial (!)       |\n");
        printf("| 13- Logaritmo (log)  | 14- MMC (lcm)        | 15- MDC (gcd)          |\n");
        printf("| 16- Moda (Mo)        | 17- Media (x)        | 18- Mediana (Me)       |\n");
        printf("| 19- Graus -> rad     | 20- Rad -> graus     | 0- Sair                |\n");
        printf("=========================================================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        // =========================================================
        // SWITCH / CASE
        // =========================================================

        switch (opcao) {

            // =====================================================
            // 1 - ADICAO
            // =====================================================

            case 1:

                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = num1 + num2;

                printf("Resultado: %.2f + %.2f = %.2f\n",
                       num1, num2, resultado);

                break;


            // =====================================================
            // 2 - SUBTRACAO
            // =====================================================

            case 2:

                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = num1 - num2;

                printf("Resultado: %.2f - %.2f = %.2f\n",
                       num1, num2, resultado);

                break;


            // =====================================================
            // 3 - MULTIPLICACAO
            // =====================================================

            case 3:

                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = num1 * num2;

                printf("Resultado: %.2f * %.2f = %.2f\n",
                       num1, num2, resultado);

                break;


            // =====================================================
            // 4 - DIVISAO
            // =====================================================

            case 4:

                printf("\nDigite o numerador (dividendo): ");
                scanf("%lf", &num1);

                printf("Digite o denominador (divisor): ");
                scanf("%lf", &num2);

                if (num2 != 0) {

                    resultado = num1 / num2;

                    printf("Resultado: %.2f / %.2f = %.2f\n",
                           num1, num2, resultado);

                } else {

                    printf("Erro: Divisao por zero nao e permitida!\n");

                }

                break;


            // =====================================================
            // 5 - POTENCIA
            // =====================================================

            case 5:

                printf("\nDigite a base: ");
                scanf("%d", &num3);

                printf("Digite o expoente: ");
                scanf("%d", &num4);

                resultado = pow(num3, num4);

                printf("Resultado: %d ^ %d = %.2f\n",
                       num3, num4, resultado);

                break;


            // =====================================================
            // 6 - RAIZ QUADRADA
            // =====================================================

            case 6:

                printf("\nDigite o numero: ");
                scanf("%d", &num3);

                if (num3 >= 0) {

                    resultado = sqrt(num3);

                    printf("Resultado: raiz de %d = %.2f\n",
                           num3, resultado);

                } else {

                    printf("Erro: nao existe raiz quadrada real de numero negativo.\n");

                }

                break;


            // =====================================================
            // 7 - PORCENTAGEM
            // =====================================================

            case 7:

                printf("\nDigite o valor: ");
                scanf("%d", &num3);

                printf("Digite o percentual: ");
                scanf("%d", &num4);

                resultado = ((double)num3 * num4) / 100;

                printf("Resultado: %d%% de %d = %.2f\n",
                       num4, num3, resultado);

                break;


            // =====================================================
            // 8 - SENO
            // =====================================================

            case 8:

                printf("\nDigite o angulo em graus: ");
                scanf("%lf", &num1);

                resultado = sin(num1 * M_PI / 180.0);

                printf("Seno de %.2f graus = %.4f\n",
                       num1, resultado);

                break;


            // =====================================================
            // 9 - COSSENO
            // =====================================================

            case 9:

                printf("\nDigite o angulo em graus: ");
                scanf("%lf", &num1);

                resultado = cos(num1 * M_PI / 180.0);

                printf("Cosseno de %.2f graus = %.4f\n",
                       num1, resultado);

                break;


            // =====================================================
            // 10 - TANGENTE
            // =====================================================

            case 10:

                printf("\nDigite o angulo em graus: ");
                scanf("%lf", &num1);

                resultado = tan(num1 * M_PI / 180.0);

                printf("Tangente de %.2f graus = %.4f\n",
                       num1, resultado);

                break;


            // =====================================================
            // 11 - PI
            // =====================================================

            case 11:

                printf("\nValor de PI = %.10f\n", M_PI);

                break;


            // =====================================================
            // 12 - FATORIAL
            // =====================================================

            case 12:

                printf("\nDigite um numero inteiro positivo: ");
                scanf("%d", &num3);

                if (num3 < 0) {

                    printf("Erro: fatorial nao existe para numeros negativos.\n");

                } else if (num3 > 20) {

                    printf("Erro: digite um numero ate 20.\n");

                } else {

                    unsigned long long fatorial = 1;

                    for (i = 1; i <= num3; i++) {

                        fatorial = fatorial * i;

                    }

                    printf("%d! = %llu\n", num3, fatorial);
                }

                break;


            // =====================================================
            // 13 - LOGARITMO
            // =====================================================

            case 13:

                printf("\nDigite um numero: ");
                scanf("%lf", &num1);

                if (num1 > 0) {

                    resultado = log10(num1);

                    printf("Log10(%.2f) = %.4f\n",
                           num1, resultado);

                } else {

                    printf("Erro: o logaritmo deve receber um numero maior que zero.\n");

                }

                break;


            // =====================================================
            // 14 - MMC
            // =====================================================

            case 14:

                printf("\nDigite o primeiro numero inteiro: ");
                scanf("%d", &num3);

                printf("Digite o segundo numero inteiro: ");
                scanf("%d", &num4);

                if (num3 == 0 || num4 == 0) {

                    printf("Erro: MMC com zero nao e permitido nesta calculadora.\n");

                } else {

                    int a = abs(num3);
                    int b = abs(num4);
                    int x = a;
                    int y = b;

                    // Calculando MDC
                    while (y != 0) {

                        int temp = y;
                        y = x % y;
                        x = temp;

                    }

                    // Calculando MMC
                    resultado = (double)(a / x) * b;

                    printf("MMC(%d, %d) = %.0f\n",
                           num3, num4, resultado);
                }

                break;


            // =====================================================
            // 15 - MDC
            // =====================================================

            case 15:

                printf("\nDigite o primeiro numero inteiro: ");
                scanf("%d", &num3);

                printf("Digite o segundo numero inteiro: ");
                scanf("%d", &num4);

                if (num3 == 0 && num4 == 0) {

                    printf("Erro: MDC de 0 e 0 nao e definido.\n");

                } else {

                    int a = abs(num3);
                    int b = abs(num4);

                    while (b != 0) {

                        int temp = b;
                        b = a % b;
                        a = temp;

                    }

                    printf("MDC(%d, %d) = %d\n",
                           num3, num4, a);
                }

                break;


            // =====================================================
            // 16 - MODA
            // =====================================================

            case 16:

                printf("\nQuantos numeros deseja informar? (maximo 100): ");
                scanf("%d", &quantidade);

                if (quantidade <= 0 || quantidade > 100) {

                    printf("Quantidade invalida.\n");

                } else {

                    for (i = 0; i < quantidade; i++) {

                        printf("Digite o %d numero: ", i + 1);
                        scanf("%lf", &numeros[i]);

                    }

                    int maiorRepeticao = 0;
                    double moda = numeros[0];

                    for (i = 0; i < quantidade; i++) {

                        int repeticoes = 0;

                        for (int j = 0; j < quantidade; j++) {

                            if (numeros[i] == numeros[j]) {

                                repeticoes++;

                            }

                        }

                        if (repeticoes > maiorRepeticao) {

                            maiorRepeticao = repeticoes;
                            moda = numeros[i];

                        }

                    }

                    if (maiorRepeticao == 1) {

                        printf("Nao existe moda.\n");

                    } else {

                        printf("Moda = %.2f\n", moda);
                        printf("Quantidade de vezes que aparece = %d\n",
                               maiorRepeticao);
                    }
                }

                break;


            // =====================================================
            // 17 - MEDIA
            // =====================================================

            case 17:

                printf("\nQuantos numeros deseja informar? (maximo 100): ");
                scanf("%d", &quantidade);

                if (quantidade <= 0 || quantidade > 100) {

                    printf("Quantidade invalida.\n");

                } else {

                    double soma = 0;

                    for (i = 0; i < quantidade; i++) {

                        printf("Digite o %d numero: ", i + 1);
                        scanf("%lf", &numeros[i]);

                        soma = soma + numeros[i];

                    }

                    resultado = soma / quantidade;

                    printf("Media = %.2f\n", resultado);
                }

                break;


            // =====================================================
            // 18 - MEDIANA
            // =====================================================

            case 18:

                printf("\nQuantos numeros deseja informar? (maximo 100): ");
                scanf("%d", &quantidade);

                if (quantidade <= 0 || quantidade > 100) {

                    printf("Quantidade invalida.\n");

                } else {

                    for (i = 0; i < quantidade; i++) {

                        printf("Digite o %d numero: ", i + 1);
                        scanf("%lf", &numeros[i]);

                    }

                    // Ordenando os numeros
                    for (i = 0; i < quantidade - 1; i++) {

                        for (int j = i + 1; j < quantidade; j++) {

                            if (numeros[i] > numeros[j]) {

                                double temp = numeros[i];

                                numeros[i] = numeros[j];

                                numeros[j] = temp;
                            }
                        }
                    }

                    // Se a quantidade for impar
                    if (quantidade % 2 != 0) {

                        resultado = numeros[quantidade / 2];

                    } else {

                        resultado =
                            (numeros[quantidade / 2 - 1] +
                             numeros[quantidade / 2]) / 2.0;
                    }

                    printf("Mediana = %.2f\n", resultado);
                }

                break;


            // =====================================================
            // 19 - GRAUS PARA RADIANOS
            // =====================================================

            case 19:

                printf("\nDigite o valor em graus: ");
                scanf("%lf", &num1);

                resultado = num1 * M_PI / 180.0;

                printf("%.2f graus = %.4f radianos\n",
                       num1, resultado);

                break;


            // =====================================================
            // 20 - RADIANOS PARA GRAUS
            // =====================================================

            case 20:

                printf("\nDigite o valor em radianos: ");
                scanf("%lf", &num1);

                resultado = num1 * 180.0 / M_PI;

                printf("%.4f radianos = %.2f graus\n",
                       num1, resultado);

                break;


            // =====================================================
            // 0 - SAIR
            // =====================================================

            case 0:

                continuar = 'N';

                printf("\nEncerrando a calculadora...\n");

                break;


            // =====================================================
            // OPCAO INVALIDA
            // =====================================================

            default:

                printf("\nErro: Opcao invalida! Digite um numero de 0 a 20.\n");

                break;
        }


        // =========================================================
        // PERGUNTA SE DESEJA CONTINUAR
        // =========================================================

        if (opcao != 0) {

            printf("\nDeseja fazer um novo calculo? (Y/N): ");
            scanf(" %c", &continuar);

        }


    } while (continuar == 'Y' || continuar == 'y');


    printf("\n=============================================\n");
    printf("     Calculadora encerrada. Ate logo!\n");
    printf("=============================================\n");

    return 0;
}
```