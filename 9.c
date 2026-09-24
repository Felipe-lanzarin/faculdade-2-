9. Ler 5 notas e contar quantas >= 6

#include <stdio.h>
int main() {
 int i, count = 0;
 float nota;

 for (i = 1; i <= 5; i++) {
 printf("Digite a nota %d: ", i);
 scanf("%f", &nota);
 if (nota >= 6.0f) {
 count++;
 }
 }
 printf("Notas maiores ou iguais a 6: %d\n", count);
 return 0;
}