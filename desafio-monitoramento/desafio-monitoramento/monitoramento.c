#include <stdio.h>
#include <float.h>

/*
 * Projeto: Desafio de Monitoramento de Temperatura
 * Aluno: Arthur Ribeiro Ferreira
 *
 * O programa monitora temperaturas e encerra automaticamente
 * quando encontra 3 temperaturas consecutivas acima do limite.
 */

#define TEMP_MINIMA -100.0
#define TEMP_MAXIMA 100.0

int main(void) {
    double limite;
    double temperatura;
    double soma = 0.0;
    double maior = -DBL_MAX;
    double menor = DBL_MAX;
    int quantidade = 0;
    int acimaDoLimite = 0;
    int consecutivas = 0;

    printf("=============================================\n");
    printf("     DESAFIO DE MONITORAMENTO DE TEMPERATURA\n");
    printf("=============================================\n\n");

    /* Validação do limite: deve estar dentro da faixa permitida. */
    do {
        printf("Digite o limite de temperatura (%.0f a %.0f): ",
               TEMP_MINIMA, TEMP_MAXIMA);

        if (scanf("%lf", &limite) != 1) {
            printf("Entrada invalida! Digite um numero.\n\n");
            while (getchar() != '\n') {
                /* Limpa caracteres restantes no teclado. */
            }
            limite = TEMP_MINIMA - 1;
        } else if (limite < TEMP_MINIMA || limite > TEMP_MAXIMA) {
            printf("Limite invalido! Informe um valor entre %.0f e %.0f.\n\n",
                   TEMP_MINIMA, TEMP_MAXIMA);
        }
    } while (limite < TEMP_MINIMA || limite > TEMP_MAXIMA);

    printf("\nMonitoramento iniciado.\n");
    printf("O programa sera encerrado apos 3 temperaturas consecutivas acima do limite.\n\n");

    /*
     * O while mantém o monitoramento acontecendo enquanto ainda não
     * foram registradas 3 temperaturas consecutivas acima do limite.
     */
    while (consecutivas < 3) {
        printf("Digite a temperatura (%.0f a %.0f): ",
               TEMP_MINIMA, TEMP_MAXIMA);

        if (scanf("%lf", &temperatura) != 1) {
            printf("Entrada invalida! Digite um numero.\n\n");
            while (getchar() != '\n') {
                /* Limpa caracteres restantes no teclado. */
            }
            continue;
        }

        if (temperatura < TEMP_MINIMA || temperatura > TEMP_MAXIMA) {
            printf("Temperatura invalida! Informe um valor entre %.0f e %.0f.\n\n",
                   TEMP_MINIMA, TEMP_MAXIMA);
            continue;
        }

        /* Atualiza os dados gerais da leitura válida. */
        quantidade++;
        soma += temperatura;

        if (temperatura > maior) {
            maior = temperatura;
        }

        if (temperatura < menor) {
            menor = temperatura;
        }

        /* Verifica se a temperatura está acima do limite. */
        if (temperatura > limite) {
            acimaDoLimite++;
            consecutivas++;

            printf("ALERTA: temperatura acima do limite!\n");
            printf("Consecutivas acima do limite: %d\n\n", consecutivas);
        } else {
            /*
             * Uma temperatura que não ultrapassa o limite quebra
             * a sequência de temperaturas consecutivas.
             */
            consecutivas = 0;
            printf("Temperatura dentro do limite.\n\n");
        }
    }

    /* Relatório final. */
    printf("\n=============================================\n");
    printf("              RELATORIO FINAL\n");
    printf("=============================================\n");
    printf("Limite definido: %.2f\n", limite);
    printf("Quantidade de temperaturas validas: %d\n", quantidade);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Media das temperaturas: %.2f\n", soma / quantidade);
    printf("Acima do limite: %d\n", acimaDoLimite);
    printf("Percentual acima do limite: %.2f%%\n",
           (acimaDoLimite * 100.0) / quantidade);
    printf("Motivo do encerramento: 3 temperaturas consecutivas acima do limite.\n");
    printf("=============================================\n");

    return 0;
}
