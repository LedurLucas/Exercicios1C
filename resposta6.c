#include <stdio.h>

int main() {
    float cotacao, real, dolar;
    printf("Informa a cota��o do dolar: ");
    scanf("%f", &cotacao);
    printf("Informe a quantide de reais a ser convertida: ");
    scanf("%f", &real);
    dolar = real / cotacao;
    printf("Cota��o do dolar: %f\n", cotacao);
    printf("Valor em Real: %f\n", real);
    printf("Valor em d�lar: %f\n", dolar);
    return 0;
}
