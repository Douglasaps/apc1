//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

#include <stdio.h>

int main() {

  int base = 10;
  int altura = 8;

  float area = base * altura /2;

  printf("A área é %.2f", area);

  return 0;
}