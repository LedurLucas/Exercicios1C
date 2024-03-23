#include <stdio.h>

int main() {
 float v1, v2, soma, subt, multi, divi;
 printf ("Escreva um valor:");
 scanf ("%f", &v1);
  printf ("Escreva outro valor:");
 scanf ("%f", &v2);
 soma = v1+v2;
 subt = v1 - v2;
 multi = v1*v2;
 divi = v1/v2;
 printf ("Resultados:\n");
 printf("%f + %f = %f\n", v1, v2, soma);
 printf("%f - %f = %f\n", v1, v2, subt);
 printf("%f * %f = %f\n", v1, v2, multi);
 printf("%f / %f = %f\n", v1, v2, divi);




return 0;


}
