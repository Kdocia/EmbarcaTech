/* 
10 - Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). 
Gere outro número formado pelos dígitos invertidos do número lido. 
Exemplo: número lido: 123 e o resultado invertido deve ser 321.
*/

// Incluindo bibliotecas que serão utilizadas
#include <stdio.h>
#include <locale.h>

/* Função: inverterNumero
    Esta função recebe um número inteiro como entrada e retorna o mesmo número com os dígitos invertidos.
    Parâmetros:
      - numero: um número inteiro positivo.
    Retorno:
      - O número inteiro invertido.*/
int inverterNumero(int numero) {
    int invertido = 0, resto; // Variáveis auxiliares: 'invertido' armazena o número invertido e 'resto' armazena o último dígito.

    // Loop para processar cada dígito do número até que ele seja 0.
    while (numero != 0) {
        resto = numero % 10;           // Obtém o último dígito do número.
        invertido = invertido * 10 + resto; // Adiciona o dígito à nova ordem.
        numero /= 10;                 // Remove o último dígito do número original.
    }

    return invertido; // Retorna o número com os dígitos invertidos.
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura o programa para exibir mensagens em português corretamente no terminal.
    int numero, numeroInvertido;    // declaração das variáveis para armazenar o número original e o número invertido.

    // Solicita ao usuário um número de três dígitos.
    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    // Verifica se o número está dentro do intervalo permitido (100 a 999).
    if (numero >= 100 && numero <= 999) {
        numeroInvertido = inverterNumero(numero); // Chama a função para inverter o número.
        printf("O número invertido é: %d\n", numeroInvertido); // Exibe o resultado.
    } else {
        // Tratamente de erro: Exibe uma mensagem de erro se o número não for válido.
        printf("Número inválido. Digite um número entre 100 e 999.\n");
    }

    return 0;
}
