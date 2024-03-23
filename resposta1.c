#include <stdio.h>

#define PI 3.14

int main() {
    float raio, altura, vol;

    printf("Digite o valor do raio da lata cilindrica: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura da lata cilindrica: ");
    scanf("%f", &altura);

    vol = PI * raio * raio * altura;

    printf("O volume da lata cilindrica e: %f", vol);

    return 0;
}
