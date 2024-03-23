#include <stdio.h>

int main() {
    int a, b, c;
    printf ("Digite o primeiro valor: ");
    scanf ("%d", &a);
    printf ("Digite o segundo valor: ");
    scanf ("%d", &b) ;
 printf("Valores Originais\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    c = a;
    a = b;
    b = c;
    printf("Valores após as trocas:\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
   return 0;

}

