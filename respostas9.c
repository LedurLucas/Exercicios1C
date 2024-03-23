#include <stdio.h>

int main() {
    int i1, i2, i3, i4, med;
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &i1);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &i2);
    printf("Digite a idade da terceira pessoa: ");
    scanf("%d", &i3);
    printf("Digite a idade da quarta pessoa: ");
    scanf("%d", &i4);
    med = (i1+i2+i3+i4) /4;
    printf ("A media da idade das 4 pessoas e %d", med);

         return 0;
}
