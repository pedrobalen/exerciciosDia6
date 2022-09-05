#include <stdio.h>

void main() {
  float comprimento, largura, altura, area;
  int totalcaixasdeazulejo;
  float caixadeazulejo = 1.5;

  printf("Insira comprimento:\n");
  scanf("%f", &comprimento);
  printf("Insira largura:\n");
  scanf("%f", &largura);
  printf("Insira altura:\n");
  scanf("%f", &altura);

  area = comprimento * altura * largura;

  totalcaixasdeazulejo = area/caixadeazulejo;

  printf("%d caixas de azulejo", totalcaixasdeazulejo);
  
  
}