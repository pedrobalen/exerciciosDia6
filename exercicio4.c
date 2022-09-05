#include <stdio.h>

void main(){
  float salarioInicial,aumento, porcentagemDeAumento, salarioFinal;

  printf("Insira salario inicial\n");
  scanf("%f", &salarioInicial);
  printf("Insira porcentagem de aumento\n");
  scanf("%f", &porcentagemDeAumento);

  aumento = salarioInicial * (porcentagemDeAumento / 100);
  salarioFinal = salarioInicial + aumento;

  printf("Salario final R$ %.2f", salarioFinal);
  
  
}