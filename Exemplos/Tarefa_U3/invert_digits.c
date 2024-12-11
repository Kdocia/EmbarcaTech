/* 
10 - Fa�a um programa que leia um n�mero inteiro positivo de tr�s d�gitos (de 100 a 999). 
Gere outro n�mero formado pelos d�gitos invertidos do n�mero lido. 
Exemplo: n�mero lido: 123 e o resultado invertido deve ser 321.
*/

// Incluindo bibliotecas que ser�o utilizadas
#include <stdio.h>
#include <locale.h>

/* Fun��o: inverterNumero
    Esta fun��o recebe um n�mero inteiro como entrada e retorna o mesmo n�mero com os d�gitos invertidos.
    Par�metros:
      - numero: um n�mero inteiro positivo.
    Retorno:
      - O n�mero inteiro invertido.*/
int inverterNumero(int numero) {
    int invertido = 0, resto; // Vari�veis auxiliares: 'invertido' armazena o n�mero invertido e 'resto' armazena o �ltimo d�gito.

    // Loop para processar cada d�gito do n�mero at� que ele seja 0.
    while (numero != 0) {
        resto = numero % 10;           // Obt�m o �ltimo d�gito do n�mero.
        invertido = invertido * 10 + resto; // Adiciona o d�gito � nova ordem.
        numero /= 10;                 // Remove o �ltimo d�gito do n�mero original.
    }

    return invertido; // Retorna o n�mero com os d�gitos invertidos.
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura o programa para exibir mensagens em portugu�s corretamente no terminal.
    int numero, numeroInvertido;    // declara��o das vari�veis para armazenar o n�mero original e o n�mero invertido.

    // Solicita ao usu�rio um n�mero de tr�s d�gitos.
    printf("Digite um n�mero de tr�s d�gitos: ");
    scanf("%d", &numero);

    // Verifica se o n�mero est� dentro do intervalo permitido (100 a 999).
    if (numero >= 100 && numero <= 999) {
        numeroInvertido = inverterNumero(numero); // Chama a fun��o para inverter o n�mero.
        printf("O n�mero invertido �: %d\n", numeroInvertido); // Exibe o resultado.
    } else {
        // Tratamente de erro: Exibe uma mensagem de erro se o n�mero n�o for v�lido.
        printf("N�mero inv�lido. Digite um n�mero entre 100 e 999.\n");
    }

    return 0;
}
