1. Mostrar nome, idade e altura

#include <stdio.h>
int main() {
 char nome[] = "Carlos";
 int idade = 20;
 float altura = 1.75f;

 printf("Nome: %s\n", nome);
 printf("Idade: %d\n", idade);
 printf("Altura: %.2f\n", altura);
 return 0;
}