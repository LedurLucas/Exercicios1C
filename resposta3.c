#include <stdio.h>

int main() {
    int v1, v2, v3, soma;
    printf ("Digite o primeiro valor: ");
    scanf ("%d", &v1);
    printf ("Digite o segundo valor: ");
    scanf ("%d", &v2);
    printf ("Digite o terceiro valor: ");
    scanf ("%d", &v3);

    v1 = v1*v1;
    v2 = v2*v2;
    v3 = v3*v3;

    soma = v1 + v2 + v3;

    printf ("A soma dos quadrados dos 3 valores sao: %d", soma);


    return 0;


}
