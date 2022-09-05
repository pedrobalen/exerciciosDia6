#include <stdio.h>

void main() {
  float preco = 0.90;
  float marcacaoInicio, marcacaoFinal, litrosGasto, valorTotalRecebido,
      consumoMedio, lucro;

  printf("Odometro no inicio do dia:\n");
  scanf("%f", &marcacaoInicio);
  printf("Odometro no final do dia:\n");
  scanf("%f", &marcacaoFinal);
  printf("Litros de combustivel gasto:\n");
  scanf("%f", &litrosGasto);
  printf("Valor recebido dos passageiros:\n");
  scanf("%f", &valorTotalRecebido);

  consumoMedio = (marcacaoFinal - marcacaoInicio) / litrosGasto;
  printf("Consumo medio: %.2f km/l\n", consumoMedio);

  lucro =  valorTotalRecebido - (preco * litrosGasto);
  printf("Lucro de R$ %.2f ", lucro);
  
    
}