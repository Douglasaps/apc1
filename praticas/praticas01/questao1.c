//Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

#include<stdio.h>

int main() {
float nota_a1 = 7.0f;
float nota_a2 = 7.0f;

  float media = 0.4f * nota_a1 + 0.6f * nota_a2;

  printf("a média é %.2f", media);

  return 0;
}