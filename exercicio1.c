#include <stdio.h>

void main() {
  int eleitores, brancos, nulos, validos;
  float percBrancos, percNulos, percValidos;

  printf("Informe o numero de eleitores:\n");
  scanf("%d", &eleitores);
  printf("Informe o numero de votos validos:\n");
  scanf("%d", &validos);
  printf("Informe o numero de votos em branco:\n");
  scanf("%d", &brancos);
  printf("Informe o numero de votos nulos:\n");
  scanf("%d", &nulos);

  percValidos = (validos * 100) / eleitores;
  percBrancos = (brancos * 100) / eleitores;
  percNulos = (nulos * 100) / eleitores;

  printf("\n\%.f%% de votos validos.\n", percValidos);
  printf("%.f%% de votos em branco.\n", percBrancos);
  printf("%.f%% de votos nulos.\n", percNulos);
}
