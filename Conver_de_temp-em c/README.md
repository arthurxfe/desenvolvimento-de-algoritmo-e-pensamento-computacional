# Conversor de Temperaturas em C

## Descrição da atividade

Programa em linguagem C desenvolvido para a disciplina, com o objetivo de
praticar o uso da estrutura `switch...case` para direcionar diferentes
operações dentro de um algoritmo a partir da escolha do usuário.

O programa converte temperaturas entre as escalas **Celsius**, **Fahrenheit**
e **Kelvin**, oferecendo seis opções de conversão em um menu interativo.

## Funcionamento do programa

1. O programa exibe um menu com as seis opções de conversão disponíveis.
2. O usuário digita o número da opção desejada.
3. O usuário informa o valor da temperatura a ser convertida.
4. Uma estrutura `switch...case` direciona a execução para a função de
   conversão correspondente.
5. O resultado é exibido na tela, já com a unidade de destino.
6. Caso o usuário digite uma opção fora do intervalo de 1 a 6, o `default`
   do `switch` exibe uma mensagem de opção inválida.

O programa foi organizado com **uma função específica para cada conversão**,
conforme o desafio proposto, facilitando a leitura e a manutenção do código.

## Opções de conversão implementadas

| Opção | Conversão              | Fórmula utilizada                          |
|:-----:|-------------------------|---------------------------------------------|
| 1     | Celsius → Fahrenheit     | F = C × 9/5 + 32                            |
| 2     | Celsius → Kelvin         | K = C + 273.15                              |
| 3     | Fahrenheit → Celsius     | C = (F − 32) × 5/9                          |
| 4     | Fahrenheit → Kelvin      | K = (F − 32) × 5/9 + 273.15                 |
| 5     | Kelvin → Celsius         | C = K − 273.15                              |
| 6     | Kelvin → Fahrenheit      | F = (K − 273.15) × 9/5 + 32                 |

As conversões entre Fahrenheit e Kelvin (opções 4 e 6) foram implementadas
utilizando a escala Celsius como intermediária, reaproveitando as funções
já existentes de conversão.

## Estrutura do código

- `exibirMenu()` — imprime o menu de opções na tela.
- `celsiusParaFahrenheit()` — converte Celsius em Fahrenheit.
- `celsiusParaKelvin()` — converte Celsius em Kelvin.
- `fahrenheitParaCelsius()` — converte Fahrenheit em Celsius.
- `fahrenheitParaKelvin()` — converte Fahrenheit em Kelvin (via Celsius).
- `kelvinParaCelsius()` — converte Kelvin em Celsius.
- `kelvinParaFahrenheit()` — converte Kelvin em Fahrenheit (via Celsius).
- `main()` — lê a opção e a temperatura, executa o `switch...case` e exibe
  o resultado.

## Instruções para execução

### Compilação (Linux/macOS/WSL, usando GCC)

```bash
gcc -Wall -o conversor conversor_temperaturas.c
```

### Execução

```bash
./conversor
```

### No Windows (com GCC/MinGW instalado)

```bash
gcc -Wall -o conversor.exe conversor_temperaturas.c
conversor.exe
```

### Exemplo de uso

```
===== CONVERSOR DE TEMPERATURAS =====
1. Celsius    -> Fahrenheit
2. Celsius    -> Kelvin
3. Fahrenheit -> Celsius
4. Fahrenheit -> Kelvin
5. Kelvin     -> Celsius
6. Kelvin     -> Fahrenheit
======================================
Escolha uma opcao: 1
Informe a temperatura a ser convertida: 25
Resultado: 25.00 Celsius = 77.00 Fahrenheit
```

## Autor

Trabalho desenvolvido para fins acadêmicos, como exercício prático de
estruturas de decisão (`switch...case`) e organização de código em
funções na linguagem C.
